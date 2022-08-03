#include <stdio.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - adds two integer numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: sum of a & b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract 2nd number from 1st number
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide 1st number by second number
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: result of division of a by b
 */

int op_div(int a, int b)
{
	if (b == 0)
		return (NULL);
	return (a / b);
}

/**
 * op_mod - remainder of division of 1st number by 2nd number
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: remainer of divison of a by b
 */

int op_mod(int a, int b)
{
	if (b == 0)
		return (NULL);
	return (a % b);
}
