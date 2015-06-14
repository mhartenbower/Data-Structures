#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class LinkedList
{
public:
	LinkedList();
	void traverse();
	void insertBeginning(node* newNode, int v);
	void insertEnd(node* newNode, int v);
	void removeBeginning();
	void removeEnd();
	void removeValue(int v);
	bool search(int v);
	struct Node{
		int value;
		Node* next;
	};

private:
	Node* head;
	int length;

};

#endif