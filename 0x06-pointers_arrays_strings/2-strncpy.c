/**
 * *_strncpy - copies a string, at most n bytes of src are copied
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of bytes to be copied from src
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
