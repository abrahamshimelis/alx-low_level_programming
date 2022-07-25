#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: address of first string
 * @s2: address of second string
 *
 * Return: on success pointer to new allocated space
 * Null on NULL input or if malloc fails
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *p;

	len1 = 0;
	len2 = 0;
	i = 0;
	j = 0;

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	p = malloc(sizeof(char) * len1 + len2 + 1);

	if (p == NULL)
		return (NULL);
	while (i < len1)
	{
		*(p + i) = s1[i];
		i++;
	}
	while (j < len2)
	{
		*(p + i + j) = s2[j];
		j++;
	}
	*(p + i + j) = '\0';

	return (p);
}
