#include "nb_stack.h"

Node::Node() {}
Node::~Node() {}
Node::Node(const char c) {}
Node::Node(const char* str) {}

char* Node::getData()
{
	return data;
}

Node* Node::getNext()
{
	return next;
}

void Node::setData(const char c) {}

void Node::setData(const char* str) {}

void Node::setNext(Node* next)
{
	this->next = next;
}

NodeBasedStack::NodeBasedStack() {}
NodeBasedStack::NodeBasedStack(const NodeBasedStack& other) {}
NodeBasedStack& NodeBasedStack::operator = (const NodeBasedStack& other) {}
NodeBasedStack::~NodeBasedStack() {}

void NodeBasedStack::push(const char c) {}
void NodeBasedStack::push(const char* str) {}
bool NodeBasedStack::pop() { return true; }
char* NodeBasedStack::getTop() const { char* a; return a; }
bool NodeBasedStack::isEmpty() const { return true; }
int NodeBasedStack::getSize() const { return 0; }

