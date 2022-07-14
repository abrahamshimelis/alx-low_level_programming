/**
 * *cap_string - capitalizes all words of a string
 * @str: pointer to string
 *
 * Return: pointer to a capitalized string
 */

char *cap_string(char *str)
{
	int i, j;

	char s[13];

	s[0] = ' ';
	s[1] = '\n';
	s[2] = '\t';
	s[3] = ',';
	s[4] = ';';
	s[5] = '!';
	s[6] = '?';
	s[7] = '"';
	s[8] = '(';
	s[9] = ')';
	s[10] = '{';
	s[11] = '}';
	s[12] = '.';

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}

		for (j = 0; j < 13; j++)
		{
			if (str[i] == s[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
			}
		}
	}
	return (str);

}
