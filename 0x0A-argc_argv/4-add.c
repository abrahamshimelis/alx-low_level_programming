#include <stdio.h>

int str2int(char *s);

/**
 * main - prints addition of posiive numbers
 * @argc: argument counter integer
 * @argv: argument vector pointer
 *
 * Return: 0 on success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	unsigned int sum;
	int i;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (str2int(argv[i]) == '\0')
		{
			printf("Error\n");
			return (1);
		}
		sum += str2int(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}

/**
 * str2int - change string char to integer
 * @s: string pointer
 *
 * Return: number on sucess,'e' otherwise
 */

int str2int(char *s)
{
	int len, i, f, digit;
	unsigned int n;

	len = 0;
	i = 0;
	f = 0;
	digit = 0;
	n = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return ('\0');

	return (n);
}
