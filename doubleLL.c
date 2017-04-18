#include "doubleLL.h"
#include <stdio.h>
#include <stdlib.h>

void dll_init(DoubleLinkedList *list)
{
    list = malloc(sizeof(list));
}

void dll_place_before(DoubleLinkedList *list, int element)
{
    Node *temp = malloc(sizeof(*temp));
    temp->data = element;
    temp->next = list->head;
    if (list->size == 0)
        list->tail = temp;
    else
        list->head->previous = temp;

    list->heap = temp;
    list->size++;
}

void dll_place_after(DoubleLinkedList *list, int element)
{
    Node *temp = malloc(sizeof(*temp));
    temp->data = element;
    temp->previous = list->tail;
    if (list->size == 0)
        list->head = temp;
    else
        list->tail->next = temp;

    list->tail = temp;
    list->size++;
}
