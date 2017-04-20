typedef struct Node Node;

typedef struct DoubleLinkedList DoubleLinkedList;

/* List initialization */
DoubleLinkedList *dllCreate();

/* Check if list is empty or not */
int dllIfEmpty(DoubleLinkedList *list);

/* Place an element in the end of the list */
void dllAppend(DoubleLinkedList *list, int element);

/* Place an element in the beginning of the list */
void dllPrepend(DoubleLinkedList *list, int element);

/* Print whole list */
void dllPrintList(DoubleLinkedList *list);

/* Insert an element after the specified node */
void dllInsertAfter(DoubleLinkedList *list, Node *node, int element);

/* Insert an element before the specified node */
void dllInsertBefore(DoubleLinkedList *list, Node *node, int element);

/* Get the first node of the list */
Node *dllGetFirstNode(DoubleLinkedList *list);

/* Get the last node of the list */
Node *dllGetLastNode(DoubleLinkedList *list);

/* Get the node after the specified node */
Node *dllGetNextNode(DoubleLinkedList *list, Node *node);

/* Get the node before the specified node */
Node *dllGetPreviousNode(DoubleLinkedList *list, Node *node);

/* Swap the data in two nodes */
void dllSwapNodes(DoubleLinkedList *list, Node *firstNode, Node *secondNode);