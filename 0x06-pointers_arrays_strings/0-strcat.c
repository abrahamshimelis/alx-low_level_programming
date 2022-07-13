/**
 * *_strcat - concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 *
 * Return: the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j, k;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (src[j] != '\0')
	{
		j++;
	}

	k = 0;

	while (src[k] != '\0')
	{
		dest[i + k] = src[k];
		k++;
	}

	dest[i + k] = '\0';

	return (dest);
}

