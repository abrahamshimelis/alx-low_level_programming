#include "main.h"

/**
 * more_numbers - prints 10 times numbers, from 0 to 14,
 * followed by a new line
 */

void more_numbers(void)
{
	int line = 0;

	while (line < 10)
	{
		int num = 0;

		while (num <= 14)
		{
			if (num >= 10)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
			num++;
		}
		_putchar('\n');
		line++;
	}
}
