/**
 * *_strstr - a function that locates a sub string
 * @haystack: address of 1st string
 * @needle: address of 2nd string
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, flag;

	j = 0;
	flag = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[j])
		{
			while (needle[j] != '\0')
			{
				if (haystack[i + j] == needle[j])
					j++;
			}
			haystack = &haystack[i];
			flag = 1;
		}
	}
	if (flag == 1)
		return (haystack);
	else
		return ('\0');
}
