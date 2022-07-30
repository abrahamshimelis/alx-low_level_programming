#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: address of 1st string
 * @s2: address of 2nd string
 * @n: number of 2nd string byte as poisitive integer
 *
 * Return: address of newly allocated space on success,
 * NULL if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *str;

	len1 = 0;
	len2 = 0;
	i = 0;
	j = 0;

	while (s1 && s1[i] != '\0')
		len1++;
	while (s2 && s2[j] != '\0')
		len2++;
	if (n < len2)
		str = malloc(sizeof(char) * (len1 + n + 1));
	else
		str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
		return (NULL);
	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}
	while (n < len2 && j < n)
	{
		str[i] = s2[j];
		j++;
		i++;
	}
	while (n >= len2 && j < len2)
	{
		str[i] = s2[j];
		j++;
		i++;
	}
	str[i] = '\0';
	return (str);

}
