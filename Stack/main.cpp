#include "StackAsArray.h"
#include <iostream>

using namespace std;

int main()
{
	StackAsArray newStack(3); //create a new stack with a max size of 10
	cout << "Peek: " << newStack.peek() << endl;
	newStack.push(1);
	cout << "Peek: " << newStack.peek() << endl;
	newStack.push(2);
	cout << "Peek: " << newStack.peek() << endl;
	newStack.push(3);
	cout << "Peek: " << newStack.peek() << endl;
	newStack.push(4);
	cout << "Peek: " << newStack.peek() << endl;
	cout << "Pop: " << newStack.pop() << endl;
	cout << "Peek: " << newStack.peek() << endl;
	newStack.push(4);
	cout << "Peek: " << newStack.peek() << endl;

	return 0;
}