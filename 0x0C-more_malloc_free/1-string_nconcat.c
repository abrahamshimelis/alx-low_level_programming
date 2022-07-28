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
	/**
	 * if s1 or/and s2 = NULL
	 * yes -> len1 or/and len2 = 0
	 * no -> nothing
	 * count s1, s2
	 * if len2 >= n
	 * yes -> n = len2
	 * no -> nothing
	 * create new memory space with size of len1 + n + 1
	 * if create new memory = success
	 * yes-> copy s1 & s2 & '\0' to new memory location, return that location
	 * no-> return NULL
	*/

	unsigned int i, j, k;
	char *str;

	i = 0;
	j = 0;

	if (s2 == NULL)
		n = 1;

	while (s1 && s1[i] != '\0')
		i++;
	while (s2 && s2[j] != '\0')
		j++;
	if (n >= j)
		n = j;
	str = malloc(sizeof(char) * (i + j + 1));
	if (str == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		str[k] = s1[k];
	for (k = 0; k < n; k++)
		str[i + k] = s2[k];
	str[i + n] = '\0';
	return (str);

}
