typedef struct SimpleNode {
	int data;
	struct SimpleNode *previous;
	struct SimpleNode *next;
} Node;

typedef struct {
	int size;
	Node *head;
	Node *tail;
} DoubleLinkedList;

void dll_init(DoubleLinkedList *list);

void dll_place_before(DoubleLinkedList *list, int element);

void dll_place_after(DoubleLinkedList *list, int element);

int dll_get_element(DoubleLinkedList *list, int index);

int dll_remove_element(DoubleLinkedList *list, int index);
