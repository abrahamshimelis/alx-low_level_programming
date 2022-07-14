#include "main.h"
#include <stdio.h>

/**
 * main - test a function that encodes a string to 1337
 *
 * Return: Always 0
 */

int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
	char *p;

	p = leet(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
