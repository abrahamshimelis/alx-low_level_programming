#include <stdio.h>

/**
 * main - prints numbers from 1 to 100, followed by a new line
 * for muliples of three print Fizz, for multiples of five
 * print Buzz an for both print FizzBuzz
 * Return: 0
 */

int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (n % 3 == 0 && n % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0 && n % 3 != 0)
		{
			printf("Buzz ");
		}
		else if (n % 3 != 0 && n % 5 != 0)
		{
			printf("%d ", n);
		}
		n++;
	}
	printf("\n");

	return (0);
}
