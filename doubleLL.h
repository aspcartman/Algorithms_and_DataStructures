typedef struct Node Node;

typedef struct DoubleLinkedList DoubleLinkedList;

void dllInit(DoubleLinkedList *list);

void dllPlaceBefore(DoubleLinkedList *list, int element);

void dllPlaceAfter(DoubleLinkedList *list, int element);
