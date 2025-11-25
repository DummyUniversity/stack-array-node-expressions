#ifndef ARRAY_BASED_STACK_20251125_H
#define ARRAY_BASED_STACK_20251125_H

#include <iostream>

class ArrayBasedStack
{
	char* stack = NULL;
	int top;
	int capacity;

public:

	ArrayBasedStack(const int capacity);
	ArrayBasedStack(const ArrayBasedStack& other);
	ArrayBasedStack& operator = (const ArrayBasedStack& other);
	~ArrayBasedStack();

	void push(const char c);
	bool pop();
	char getTop() const;
	bool isEmpty() const;
	int getSize() const;
};

#endif
