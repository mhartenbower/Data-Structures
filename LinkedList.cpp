#include "LinkedList.h"
#include <iostream>

using namespace std;



LinkedList::LinkedList()
{
	head = new Node;
	head->value = NULL;
	head->next = NULL;
}

void LinkedList::insertBeginning(Node* newNode, int v)
{
	if(head->value == NULL)
	{
		head->value = v;
		head->next = NULL;
	}

	else
	{
		newNode->next = head;
		head = newNode;
		newNode->value = v;
	}
}

void LinkedList::removeBeginning()
{
	temp = head;
	head = head->next;
	free(temp);
}

void LinkedList::traverse()
{
	int count = 0;
	Node* temp = head;
	cout << "Current state of the list: " << endl;
	while(temp)
	{
		cout << "Node: " << count << " " << temp->value << endl;
		temp = temp->next;
		count++;
	}
}

