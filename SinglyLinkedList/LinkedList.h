#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class LinkedList
{
public:
	struct Node{
		int value;
		Node* next;
	};
	LinkedList();
	void traverse();
	void insertBeginning(Node* newNode, int v);
	void insertEnd(Node* newNode, int v);
	void removeBeginning();
	void removeEnd();
	void removeValue(int v);
	bool search(int v);
	

private:
	Node* head;
	int length;
	Node* temp;

};

#endif