/**
 * file: ll.c
 *
 * It includes the implementation of the linked list.
 */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "ll.h"

void Init(LinkedList *list) {
  list->head = NULL;
  list->tail = NULL;
}

bool IsEmpty(const LinkedList *list) {
  return list->head == NULL;
}

bool IsSingleton(const LinkedList *list) {
  return !IsEmpty(list) && (list->head == list->tail);
}

int HeadVal(const LinkedList *list) {
  return list->head->val;
}

void Append(LinkedList *list, int val) {
  Node *node = malloc(sizeof *node);
  if (node == NULL) {
    printf("Error: malloc failed in Append()\n");
    return;
  }
  node->val = val;

  if (list->tail == NULL) {
    list->head = node;
  } else {
    list->tail->next = node;
  }

  list->tail = node;
  node->next = list->head;
}

void Delete(LinkedList *list, Node *prev) {
  Node *cur = prev->next;
  Node *next = cur->next;
  prev->next = next;

  if (cur == prev) {
    list->head = NULL;
    list->tail = NULL;
    return; // added after class
  }

  if (cur == list->head) {
    list->head = next;
  }

  if (cur == list->tail) {
    list->tail = prev;
  }

  free(cur);
}

void Print(LinkedList *list) {
  if (IsEmpty(list)) {
    return;
  }

  Node *iter = list->head;
  do {
    printf("%d\t", iter->val);
    iter = iter->next;
  } while (iter != list->head);
}