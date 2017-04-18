#include "doubleLL.h"
#include <stdio.h>
#include <stdlib.h>

void doubleLinkedList_init(doubleLinkedList *list)
{
    list = malloc(sizeof(list));
}

void doubleLinkedList_place_before(doubleLinkedList *list, int element)
{
    Node *temp = malloc(sizeof(*temp));
    temp->data = element;
    temp->next = list->head;
    if (list->size == 0)
        list->tail = temp;
    else
        list->head->pre = temp;

    list->heap = temp;
    list->size++;
}

void doubleLinkedList_place_after(doubleLinkedList *list, int element)
{
    Node *temp = malloc(sizeof(*temp));
    temp->data = element;
    temp->pre = list->tail;
    if (list->size == 0)
        list->head = temp;
    else
        list->tail->next = temp;

    list->tail = temp;
    list->size++;
}

int doubleLinkedList_get_data(doubleLinkedList *list, int index)
{

}