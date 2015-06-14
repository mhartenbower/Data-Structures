#include "LinkedList.h"
#include <iostream>

using namespace std;



LinkedList:LinkedList()
{
	head->value = NULL;
	head->next = NULL;
}

void LinkedList::insertBeginning(node* newNode, int v)
{
	if(head == NULL)
	{
		head->value = v;
		head->next = NULL:
	}

	else
	{
		newNode->next = head;
		head = newNode;
		newNode->value = v;
	}
}

void LinkedList::

};