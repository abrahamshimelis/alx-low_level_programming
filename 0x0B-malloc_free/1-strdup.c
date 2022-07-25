#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as
 * a parameter
 * @str: address of string
 *
 * Return: on success return pointer to new string, if string is
 * null, return null, if malloc fails, return null
 */

char *_strdup(char *str)
{
	int i, j;
	char *s;

	i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	s = malloc(i + 1 * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		*(s + j) = str[j];
	return (s);
}
