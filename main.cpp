#include <iostream>
#include "test.h"
#include "ab_stack.h"
#include "nb_stack.h"
#include "expressions.h"
#include <string>
#include <cstring>

int main(int argc, char** argv)
{
	if (argc > 1)
	{
		return test(argv[1]);
	}

	return 0;
}