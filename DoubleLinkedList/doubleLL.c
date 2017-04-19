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

void dllInit(DoubleLinkedList *list) {
    list = malloc(sizeof(DoubleLinkedList));
    list->size = 0;
    list->head = NULL;
    list->tail = NULL;
}

void dllPlaceBefore(DoubleLinkedList *list, int element) {
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

void dllPlaceAfter(DoubleLinkedList *list, int element) {
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
