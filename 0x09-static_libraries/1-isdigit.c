#include "main.h"

/**
 * _isdigit - checks for a digit ( 0 through 9)
 * @c: character to be tested
 * Return: 1 on digit, 0 otherwise
 */

int _isdigit(int c)
{
	if ('0' <= c && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
