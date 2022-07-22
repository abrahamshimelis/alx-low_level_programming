/**
 * *_strncat - concatenates two strings, it will use at most
 * n bytes from src and src does not need to be null-terminated
 * if it contains n or more bytes
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: integer number of bytes
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	i = 0;
	j = 0;
	k = 0;

	while (dest[i] != '\0')
		i++;

	while (src[k] != '\0')
		k++;

	if (n > k)
		n = k;

	for (j = 0; j < n; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0';

	return (dest);
}
