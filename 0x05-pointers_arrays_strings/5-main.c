#include "main.h"
#include <stdio.h>

/**
 * main - test a function that reverses a string
 *
 * Return: Always 0
 */

int main(void)
{
	char s[10] = "My School";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
