#include "function_pointers.h"

/**
 * get_op_func - function that selects the correct function to perform
 * the operation asked by the user.
 * @s: operator passed as argument to the program
 *
 * Return: a pointer to the function that corresponds to the
 * operator given as a parameter, if s does not match any of the 5
 * expected operators (+, -, *, /, %), return NULL
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
	int (*op_func_ptr_arr[])(int, int);

	i = 0;

	while (i < 6)
	{
		if (s == ops.op)
			return (op_func_ptr[i] = ops.f);
		i++;
	}
}
