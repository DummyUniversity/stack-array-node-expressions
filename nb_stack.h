#ifndef NODE_BASED_STACK_20251125_H
#define NODE_BASED_STACK_20251125_H

#include <iostream>

class Node
{
	char data;
	Node* next = NULL;

public:

	Node();
	Node(char data);
	char getData();
	Node* getNext();
	void setData(char data);
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
