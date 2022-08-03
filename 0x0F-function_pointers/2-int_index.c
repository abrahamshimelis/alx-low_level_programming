/**
 * int_index - searches for an integer
 * @array: address of an array, of integers
 * @size: size of an array
 * @cmp: address of function to used to compare values
 *
 * Return: -1 if no elements maches & size <= 0, otherwise
 * index of 1st element for which cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	/**
	 * if size <= -1 , return -1
	 * loop size times
	 * check number in array
	 * if->yes return index
	 *
	 * if-> all check not found -> return -1
	 */
	int i;

	int (*cmp_ptr)(int) = cmp;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp_ptr(array[i]))
			return (i);
	}
	return (-1);
}
