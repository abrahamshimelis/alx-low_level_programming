/**
 * _strcmp - compares two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: negative integer, zero or positive integer
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
