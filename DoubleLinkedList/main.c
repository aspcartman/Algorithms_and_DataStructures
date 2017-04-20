#include <stdio.h>
#include "doubleLL.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");

    DoubleLinkedList *testList;

    testList = dllCreate();
    dllAppend(testList, 5);
    dllAppend(testList, 10);
    dllPrepend(testList, 3);
    dllPrintList(testList);


    return 0;
}
