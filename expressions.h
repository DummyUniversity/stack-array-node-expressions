#ifndef EXPRESSIONS_20251125_H
#define EXPRESSIONS_20251125_H

#include "ab_stack.h"
#include "nb_stack.h"
#include <iostream>
using std::string;

std::string getPostfixFromInfix(const std::string& infix, ArrayBasedStack& stack);
std::string getPostfixFromInfix(const std::string& infix, NodeBasedStack& stack);

std::string getPrefixFromInfix(const std::string& infix, ArrayBasedStack& stack);
std::string getPrefixFromInfix(const std::string& infix, NodeBasedStack& stack);

std::string getInfixFromPostfix(const std::string& postfix, ArrayBasedStack& stack);
std::string getInfixFromPostfix(const std::string& postfix, NodeBasedStack& stack);

std::string getInfixFromPrefix(const std::string& prefix, ArrayBasedStack& stack);
std::string getInfixFromPrefix(const std::string& prefix, NodeBasedStack& stack);

int evaluateInfix(const std::string& infix, ArrayBasedStack& operands, ArrayBasedStack& operators);
int evaluateInfix(const std::string& infix, NodeBasedStack& operands, NodeBasedStack& operators);

int evaluatePostfix(const std::string& infix, ArrayBasedStack& operands, ArrayBasedStack& operators);
int evaluatePostfix(const std::string& infix, NodeBasedStack& operands, NodeBasedStack& operators);

int evaluatePrefix(const std::string& infix, ArrayBasedStack& operands, ArrayBasedStack& operators);
int evaluatePrefix(const std::string& infix, NodeBasedStack& operands, NodeBasedStack& operators);

void printNotation(const std::string& notation);

#endif