#include "main.h"

/**
 * print_square - print a square, followed by a new line
 * @size: size of square as integer
 */

void print_square(int size)
{
	if (size > 0)
	{
		int i, j;

		i = size;

		while (size > 0)
		{
			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
			size--;
		}
	}
	else
	{
		_putchar('\n');
	}
}
