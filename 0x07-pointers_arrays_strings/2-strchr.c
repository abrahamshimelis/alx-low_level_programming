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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s = &s[i]);
		}
	}
	return ('\0');
}
