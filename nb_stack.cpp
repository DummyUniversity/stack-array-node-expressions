#include "nb_stack.h"

Node::Node()
{
	next = NULL;
}

Node::Node(char data)
{
	this->data = data;
	next = NULL;
}

char Node::getData()
{
	return data;
}

Node* Node::getNext()
{
	return next;
}

void Node::setData(char data)
{
	this->data = data;
}

void Node::setNext(Node* next)
{
	this->next = next;
}

NodeBasedStack::NodeBasedStack() {}
NodeBasedStack::NodeBasedStack(const NodeBasedStack& other) {}
NodeBasedStack& NodeBasedStack::operator = (const NodeBasedStack& other) {}
NodeBasedStack::~NodeBasedStack() {}

void NodeBasedStack::push(const char c) {}
bool NodeBasedStack::pop() { return true; }
char NodeBasedStack::getTop() const { return 'a'; }
bool NodeBasedStack::isEmpty() const { return true; }
int NodeBasedStack::getSize() const { return 0; }
