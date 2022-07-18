/**
 * *_memset - a function that fills memory with a constant byte
 * @s: char pointer to a memory
 * @b: constant byte of type character
 * @n: size of memory to affected of type unsigned integer
 * Return: address of memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
