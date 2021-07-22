#include <stddef.h>

/**
 * print_name - prints a name using pointers of functions
 * @name: a name to be printed
 * @f: a function to print a name
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
