#include <stdio.h>

int str2int(char *s);

/**
 * main - prints multiplications of two numbers
 * @argc: arguments counter integer
 * @argv: arguments vector string pointer
 *
 * Return: 0 on success, 1 if not recieved two arguments
 */

int main(int argc, char *argv[])
{
	int num1, num2, p;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = str2int(argv[1]);
	num2 = str2int(argv[2]);
	p = num1 * num2;
	printf("%d\n", p);

	return (0);
}

/**
 * str2int - convert digits in string to integer
 * @s: pointer to string
 *
 * Return: number , 0 otherwise
 */

int str2int(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);

	return (n);
}
