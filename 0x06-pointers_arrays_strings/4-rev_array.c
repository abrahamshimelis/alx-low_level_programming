/**
 * reverse_array - reverse the content of an array of integers
 * @a: pointer to an integer array
 * @n: size of an array as integer
 */

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	i = n -1;

	for (j = 0; j < n / 2; j++)
	{
		tmp = a[j];
		a[j] = a[i];
		a[i--] = tmp;
	}
}	
