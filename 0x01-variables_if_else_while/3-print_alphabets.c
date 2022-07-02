#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * and then in upppercase, followed by a new line
 * Return: always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
