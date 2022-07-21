int prime_num(int n, int i);

/**
 * is_prime_number - returns 1 if the input integer is prime
 * number, otherwise return 0
 * @n: integer number
 *
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_num(n, 1));
}

/**
 * prime_num - return 1 number is prime, 0 otherwise
 * @n: integer number
 * @i: integer number used to check product
 *
 * Return: 1 if number is prime, 0 otherwise
 */

int prime_num(int n, int i)
{
	int k;

	if (i >= n)
		return (1);
	for (k = 1; k < n; k++)
	{
		if (k * i == n)
			return (0);
	}
	return (prime_num(n, i + 1));
}
