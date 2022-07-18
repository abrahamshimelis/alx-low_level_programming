/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: address of string
 * @accept: address of 2nd string
 *
 * Return: postive integer
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k;

	k = 0;

	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
			}
		}
	}
	return (k);
}
