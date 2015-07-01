#ifndef STACKASARRAY_H
#define STACKASARRAY_H

class StackAsArray
{
	int maxSize;
	int top;
	int* items;

public:
	StackAsArray(int size);
	~StackAsArray();
	void push(int item);
	int pop();
	int peek();

};
#endif