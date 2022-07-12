#include "main.h"

/**
 * main - test a function that prints a string, in reverse,
 * followed by a new line
 *
 * Return: Always 0
 */

int main(void)
{
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	print_rev(str);
	return (0);
}
