#include <stdio.h>
#include <stdlib.h>
#include"linklist.h"
int main() {
    printf("Running linked list\n");
  for (int x = 0; x < 10; x++)
{
   printf("Adding value: %d to list\n", x);
    AddtoFront(x);
}
deleteAtItem(5);
printf("data at the head of list: %d \n", headPtr->nextPtr->data);
clearList();

    return 0;
}

