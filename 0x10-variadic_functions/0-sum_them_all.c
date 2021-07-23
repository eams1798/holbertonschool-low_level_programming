#include <stdarg.h>

/**
 * sum_them_all - adds all its parameters
 * @n: the quantity of arguments
 *
 * Return: The sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;
	va_list argint;

	if (n == 0)
		return (0);
	va_start(argint, n);
	for (i = 0; i < n; i++)
		sum += va_arg(argint, int);
	va_end(argint);
	return (sum);
}
