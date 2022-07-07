#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to be tested
 * Return: 1 on uppercase, 0 otherwise
 */

int _isupper(char c)
{
	if ('A' <= c && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
