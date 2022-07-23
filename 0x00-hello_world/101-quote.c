#include <unistd.h>

/**
 * main - prints exactly "and that of art is useful" - Dora
 * Korpar, 2015-10-19" followed by new line
 *
 * Return: Always 1
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
