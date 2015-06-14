#include "LinkedList.h"

using namespace std;

int main()
{
	LinkedList::Node* a = new LinkedList::Node;

	LinkedList::Node* b = new LinkedList::Node;

	LinkedList::Node* c = new LinkedList::Node;

	LinkedList newList;
	newList.insertBeginning(a, 10);
	newList.insertBeginning(b, 200);
	newList.traverse();
	newList.removeBeginning();
	newList.insertBeginning(c, 3000);
	newList.traverse();
	newList.removeBeginning();
	newList.traverse();
	newList.removeBeginning();
	newList.traverse();
}