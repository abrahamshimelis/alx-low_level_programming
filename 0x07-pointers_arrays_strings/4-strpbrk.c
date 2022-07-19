/**
 * *_strpbrk - a function that searches a string for any
 * of of a set of bytes
 * @s: address of 1st string
 * @accept: address of 2nd string
 *
 * Return: address of 1st occurance of string in 1st string
 * or null if not found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, flag, tmp;

	flag = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (flag == 0 && accept[i] == s[j])
			{
				tmp = j;
				flag = 1;
			}
			else if (accept[i] == s[j])
			{
				flag = 1;
				if (tmp > j)
					s = &s[j];
			}
		}
	}
	if (flag == 1)
		return (s);
	else
		return ('\0');
}
