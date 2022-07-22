#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: number of arguments integer
 * @argv: arguments vector array of string pointer
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argv; /* silence warnings */

	printf("%d\n", argc - 1);
	return (0);
}
