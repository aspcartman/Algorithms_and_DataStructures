typedef struct simpleNode {
	int data;
	struct simpleNode *pre;
	struct simpleNode *next;
} Node;

typedef struct {
	int size;
	Node *head;
	Node *tail;
} doubleLinkedList;

void doubleLinkedList_init(doubleLinkedList *list);

void doubleLinkedList_place_before(doubleLinkedList *list, int element);

void doubleLinkedList_place_append(doubleLinkedList *list, int element);

int  doubleLinkedList_get_element(doubleLinkedList *list, int index);

int  doubleLinkedList_remove_element(doubleLinkedList *list, int index);