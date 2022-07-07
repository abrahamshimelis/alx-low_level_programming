#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: length of line in integer
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
	}
	_putchar('\n');
}
