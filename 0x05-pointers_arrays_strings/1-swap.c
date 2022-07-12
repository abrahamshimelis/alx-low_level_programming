/**
 * swap_int - swaps the values of two integers
 * @a: pointer to interger one
 * @b: pointer to interger two
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
