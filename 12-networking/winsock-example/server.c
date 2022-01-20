// CMake 添加 link_libraries(ws2_32 wsock32)
#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdio.h>


/**
 * 这是一个 Windows 下 socket 编程的例子.(服务器端)
 * 客户端大同小异, 建议参考微软文档: https://docs.microsoft.com/zh-cn/windows/win32/winsock/initializing-winsock
 */
int main() {

    // 一些初始化工作
    WSADATA wsaData;

    int iResult;
    iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);  // Version 2.2

    if (iResult != 0) {
        printf("WSAStartup failed: %d\n", iResult);
        exit(1);
    }

    // getaddrinfo
    struct addrinfo *result, *ptr, hints;
    memset(&hints, 0, sizeof(struct addrinfo));
    hints.ai_family = AF_INET;  // IPv4
    hints.ai_socktype = SOCK_STREAM;  // TCP
    hints.ai_protocol = IPPROTO_TCP;  // Also TCP
    hints.ai_flags = AI_PASSIVE;  // Listen

    iResult = getaddrinfo(NULL, "8080", &hints, &result);  // 端口为 8080
    if (iResult != 0) {
        printf("getaddrinfo failed: %d\n", iResult);
        WSACleanup();  // 善后工作
        exit(1);
    }

    // 创建一个 socket
    SOCKET listen_socket = INVALID_SOCKET;  // 先置为无效
    listen_socket = socket(result->ai_family, result->ai_socktype, result->ai_protocol);

    if (listen_socket == INVALID_SOCKET) {
        printf("socket() failed: %d\n", WSAGetLastError());
        freeaddrinfo(result);  // 多了一个善后工作, 对应 getaddrinfo.
        WSACleanup();
        exit(1);
    }

    // 绑定到地址
    iResult = bind(listen_socket, result->ai_addr, (int) result->ai_addrlen);
    freeaddrinfo(result);  // 回收内存
    if (iResult == SOCKET_ERROR) {
        printf("bind() failed: %d\n", WSAGetLastError());
        closesocket(listen_socket);
        WSACleanup();
        exit(1);
    }


    // 监听
    if (listen(listen_socket, SOMAXCONN) == SOCKET_ERROR) {
        printf("listen() failed: %d\n", WSAGetLastError());
        closesocket(listen_socket);
        WSACleanup();
        return 1;
    }

    // 接受连接
    // 关于 select 的高级用法: https://docs.microsoft.com/zh-cn/windows/win32/api/winsock2/nf-winsock2-select
    SOCKET client_socket = INVALID_SOCKET;
    client_socket = accept(listen_socket, NULL, NULL);
    if (client_socket == INVALID_SOCKET) {
        printf("accept() failed: %d\n", WSAGetLastError());
        closesocket(listen_socket);
        WSACleanup();
        exit(1);
    }

    // 下面实现了一个非常非常简单的 HTTP Server
    // 运行程序后可以打开浏览器访问 http://127.0.0.1:8080/ 可以看到结果
    // 总之就是使用 send() 和 recv() 来发送和接收数据
    // 具体协议要自己实现.

    char recv_buf[1024];  // 输入缓存
    int buf_len = 1024;
    // 读取数据
    iResult = recv(client_socket, recv_buf, buf_len, 0);
    if (iResult > 0) {
        printf("bytes received: %d\n", iResult);
        if (strncmp(recv_buf, "GET", 3) == 0) {
            char *response = "HTTP/1.1 200 OK\r\n\r\nHelloWorld from a simple http server in C!";

            // 发送数据
            int iResult2 = send(client_socket, response, strlen(response), 0);
            if (iResult2 == SOCKET_ERROR) {
                printf("send() failed: %d\n", WSAGetLastError());
                closesocket(client_socket);
                WSACleanup();
                exit(1);
            }
            printf("bytes sent: %d\n", iResult2);

        } else {
            // 忽略非 HTTP GET 请求
        }
    } else if (iResult == 0) {
        printf("connection closing...\n");
    } else {
        printf("recv() failed: %d\n", WSAGetLastError());
        closesocket(client_socket);
        WSACleanup();
        exit(1);
    }

    // 关闭连接
    iResult = shutdown(client_socket, SD_BOTH);
    if (iResult == SOCKET_ERROR) {
        printf("shutdown() failed: %d\n", WSAGetLastError());
        closesocket(client_socket);
        WSACleanup();
        exit(1);
    }

    closesocket(client_socket);
    WSACleanup();

    return 0;
}
