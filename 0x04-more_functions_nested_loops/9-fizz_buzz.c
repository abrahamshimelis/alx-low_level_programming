#include <stdio.h>

/**
 * main - prints numbers from 1 to 100, followed by a new line
 * for muliples of three print Fizz, for multiples of five
 * print Buzz an for both print FizzBuzz
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (n % 3 == 0 && n % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (n % 5 == 0 && n % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (n == 1)
		{
			printf("%d", n);
		}
		else
		{
			printf(" %d", n);
		}
	}
	printf("\n");

	return (0);
}
