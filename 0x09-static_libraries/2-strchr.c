/**
 * *_strchr - a function that locates a character in a string
 * @s: address of a string
 * @c: character c
 *
 * Return: s if found or Null if not found
 */

char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;
		if (i == c)
			return (s - 1);
		if (i == 0)
			return ('\0');
	}
}
