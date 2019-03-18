#include "linklist.h"
struct Node* headPtr = NULL;
Node* createNewNode(int value) //returns a fully created Node 
{
	Node* newNode = (struct Node*) malloc(sizeof( struct Node)); //create node
	newNode->data = value; //add data
	newNode->nextPtr = NULL; // set next to Null
	return newNode;
}

void AddtoFront(int value)
{
	 if(headPtr == NULL) // list is empty so we need to make the head
    {
     	headPtr = createNewNode(value);  


    }
    else // the list already exist
    {   struct Node* currentNodePtr = createNewNode(value);
        currentNodePtr ->nextPtr = headPtr; // previous head is now the next pointer

        headPtr = currentNodePtr; // the current node is the new head
    }
}

void deleteAtItem(int value)
{
	if (headPtr->data == value)
	{
		Node* tempHead = headPtr->nextPtr;
		free(headPtr);
		headPtr = tempHead;
	}
	 else
	 {
		Node* currentNode = headPtr;
		Node* previousPtr = createNewNode(0);
		while(currentNode->nextPtr != NULL && currentNode->data != value)
		{
			previousPtr = currentNode;
			currentNode = currentNode->nextPtr;
			if(currentNode->data == value)
			{
				Node* tempNode = currentNode->nextPtr;
				free(currentNode);
				previousPtr->nextPtr= tempNode;
				//break;
				return;
			}
	}
	  
		printf("Value not found. No node to delete\n");
	}
}
