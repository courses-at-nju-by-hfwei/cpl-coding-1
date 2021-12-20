/**
 * file: ll.h
 *
 * It contains the declaration of types and functions.
 * It does not contain the implementation of the linked list.
 *
 * Created by hengxin on 12/20/21.
 */

#ifndef C_PL_CODING_1_11_LINKEDLIST_LL_LL_H_
#define C_PL_CODING_1_11_LINKEDLIST_LL_LL_H_

#include <stdbool.h>
typedef struct node {
  int val;
  struct node *next;
} Node;

typedef struct ll {
  Node *head;
  Node *tail;
} LinkedList;

void Init(LinkedList * list);

bool IsEmpty(const LinkedList *list);
bool IsSingleton(const LinkedList *list);

int HeadVal(const LinkedList *list);

void Append(LinkedList *list, int val);
void Delete(LinkedList *list, Node *prev);

void Print(LinkedList *list);

void Free(LinkedList *list);

#endif //C_PL_CODING_1_11_LINKEDLIST_LL_LL_H_
