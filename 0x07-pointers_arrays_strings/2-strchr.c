/**
 * *_strchr - a function that locates a character in a string
 * @s: address of a string
 * @c: character c
 *
 * Return: s if found or Null if not found
 */

char *_strchr(char *s, char c)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = *s++;
		if (j == c)
		{
			return (s - 1);
		}
	}
	return ('\0');
}
