#ifndef NODE_BASED_STACK_20251125_H
#define NODE_BASED_STACK_20251125_H

#include <iostream>

class Node
{
	char* data = NULL;
	Node* next = NULL;

public:

	Node();
	Node(const char c);
	Node(const char* str);
	char* getData();
	Node* getNext();
	void setData(const char c);
	void setData(const char* str);
	void setNext(Node* next);
};

class NodeBasedStack
{
	Node* top = NULL;

public:

	NodeBasedStack();
	NodeBasedStack(const NodeBasedStack& other);
	NodeBasedStack& operator = (const NodeBasedStack& other);
	~NodeBasedStack();

	void push(const char c);
	bool pop();
	char getTop() const;
	bool isEmpty() const;
	int getSize() const;
};

#endif

