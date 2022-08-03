/**
 * print_name - prints a name
 * @name: address of name
 * @f: address of function
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	void (*fun)(char *) = f;

	fun(name);
}
