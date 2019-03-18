#ifndef LIST_H
#define LIST_H
#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
	int data;
	struct Node* nextPtr;
}Node;
extern struct Node* headPtr;


// adt functions
Node* createNewNode(int value);
void AddtoFront(int value);
void deleteAtItem(int value);
void clearList();
#endif
