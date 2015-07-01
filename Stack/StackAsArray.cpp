#include "StackAsArray.h"
#include <iostream>

using namespace std;

StackAsArray::StackAsArray(int size)
{
	maxSize = size;
	top = 0;
	items = new int[maxSize];
}

StackAsArray::~StackAsArray()
{
	delete[] items;
}

void StackAsArray::push(int item)
{
	if(top == maxSize)
	{
		cout << "The stack is full, try popping before pushing again" << endl;
	}
	else
	{
		items[top] = item;
		top++;
	}
}

int StackAsArray::pop()
{
	if(top == 0)
	{
		cout << "The stack is empty, try pushing before popping again" << endl;
	}
	else
	{
		top--;
		return items[top];
	}
}

int StackAsArray::peek()
{
	if(top == 0)
	{
		cout<< "The stack is empty, try pushing before peeking again" << endl;
	}
	else
	{
		return items[top - 1];
	}
}