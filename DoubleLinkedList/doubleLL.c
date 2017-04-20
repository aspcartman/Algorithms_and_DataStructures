#include "doubleLL.h"
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    Node *previous;
    Node *next;
};

struct DoubleLinkedList {
    int size;
    Node *head;
    Node *tail;
};

DoubleLinkedList *dllCreate() {
    DoubleLinkedList *list;
    list = malloc(sizeof(DoubleLinkedList));
    list->size = 0;
    list->head = NULL;
    list->tail = NULL;

    return list;
}

int dllIfEmpty(DoubleLinkedList *list) {
    if (list->size == 0) {
        printf("List is empty.");
        return -1;
    }
    else return 0;
}

void dllAppend(DoubleLinkedList *list, int element) {
    Node *temp = malloc(sizeof(Node));
    temp->data = element;
    temp->next = list->head;
    if (list->size == 0)
        list->tail = temp;
    else
        list->head->previous = temp;
    
    list->head = temp;
    list->size++;
}

void dllPrepend(DoubleLinkedList *list, int element) {
    Node *temp = malloc(sizeof(Node));
    temp->data = element;
    temp->previous = list->tail;
    if (list->size == 0)
        list->head = temp;
    else
        list->tail->next = temp;
    
    list->tail = temp;
    list->size++;
}

void dllPrintList(DoubleLinkedList *list) {
    if (dllIfEmpty(list) == -1)
        return;

    int i = 0;
    Node *temp = list->head;
    for(; i < list->size; i++) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

void dllInsertAfter(DoubleLinkedList *list, Node *node, int element) {
    if (dllIfEmpty(list) == -1)
        return;

    Node *temp = malloc(sizeof(Node));
}

void dllInsertBefore(DoubleLinkedList *list, Node *node, int element) {
    if (dllIfEmpty(list) == -1)
        return;

    Node *temp = malloc(sizeof(Node));
}

Node *dllGetFirstNode(DoubleLinkedList *list) {
    if (dllIfEmpty(list) == -1)
        return NULL; //???

    return list->head;
}

Node *dllGetLastNode(DoubleLinkedList *list) {
    if (dllIfEmpty(list) == -1)
        return NULL; //???

    return list->tail;
}

Node *dllGetNextNode(DoubleLinkedList *list, Node *node) {
    if (dllIfEmpty(list) == -1)
        return NULL; //???

    if (node->next != NULL)
        return node->next;
    else {
        printf("Your node is the last one.");
        return NULL;
    }
}

Node *dllGetPreviousNode(DoubleLinkedList *list, Node *node) {
    if (dllIfEmpty(list) == -1)
        return NULL; //???

    if (node->previous != NULL)
        return node->previous;
    else {
        printf("Your node is the first one.");
        return NULL;
    }
}

void dllSwapNodes(DoubleLinkedList *list, Node *firstNode, Node *secondNode) {
    if (dllIfEmpty(list) == -1)
        return;


}
