#include <stdio.h>
#include "function_pointers.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	/**
	 * get inputs
	 *
	 * get operation
	 * return results
	 */

	int num1, num2, result;
	char *p;

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		return (98);
	}

	p = argv[2];
	if (!(*p == '+' ||
			*p == '-' ||
			*p == '*' ||
			*p == '/' ||
			*p == '%'))
	{
		printf("Error\n");
		return (99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((*p == '/' || *p == '%') && (num2 == 0))
	{
		printf("Error\n");
		return (100);
	}

	result = get_op_func(argv[2])(num1, num2);
	printf("%d\n", result);
	return (0);
}
