#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: length of diagonal in integer
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (j < i)
				{
					_putchar(' ');
				}
				else if (j == i)
				{
					_putchar('\\');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
