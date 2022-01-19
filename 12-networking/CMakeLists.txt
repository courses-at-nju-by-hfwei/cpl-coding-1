# not using select()
add_executable(uc-server uppercase/uc-server.c)
add_executable(uc-client uppercase/uc-client.c)

# using select()
add_executable(uc-server-select uppercase-select/uc-server-select.c)
add_executable(uc-client-select uppercase-select/uc-client-select.c)