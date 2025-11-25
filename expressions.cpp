#include "expressions.h"

std::string getPostfixFromInfix(const string& infix, ArrayBasedStack& stack) { return string("abc"); }
std::string getPostfixFromInfix(const string& infix, NodeBasedStack& stack) { return string("abc"); }

std::string getPrefixFromInfix(const string& infix, ArrayBasedStack& stack) { return string("abc"); }
std::string getPrefixFromInfix(const string& infix, NodeBasedStack& stack) { return string("abc"); }

int evaluateInfix(const string& infix, ArrayBasedStack& operands, ArrayBasedStack& operators) { return 0; }
int evaluateInfix(const string& infix, NodeBasedStack& operands, NodeBasedStack& operators) { return 0; }

int evaluatePostfix(const string& infix, ArrayBasedStack& operands, ArrayBasedStack& operators) { return 0; }
int evaluatePostfix(const string& infix, NodeBasedStack& operands, NodeBasedStack& operators) { return 0; }

int evaluatePrefix(const string& infix, ArrayBasedStack& operands, ArrayBasedStack& operators) { return 0; }
int evaluatePrefix(const string& infix, NodeBasedStack& operands, NodeBasedStack& operators) { return 0; }

void printNotation(const std::string& notation);
