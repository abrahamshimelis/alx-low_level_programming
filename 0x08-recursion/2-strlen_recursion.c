/**
 * _strlen_recursion - returns the lengths of a string
 * @s: a pointer to string
 *
 * Return: length of string as integer
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
