#include <stdio.h>

/**
 * main - prints program name
 * @argc: arguments counter
 * @argv: argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argc; /* silence warnings */

	printf("%s\n", argv[0]);
	return (0);
}
