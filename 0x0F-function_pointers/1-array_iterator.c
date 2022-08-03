/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: address of an array
 * @size: size of an array
 * @action: address of function to be used
 *
 * Return: nothing
 */

void array_iterator(int *array, unsigned int size, void (*action)(int))
{
	unsigned int i;

	void (*fun_ptr_arr)(int) = action;

	for (i = 0; i < size; i++)
	{
		fun_ptr_arr(array[i]);
	}
}
