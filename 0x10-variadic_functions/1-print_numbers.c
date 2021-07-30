#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_numbers - prints all numbers given as arguments
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list argint;

	if (n == 0)
	{
		putchar('\0');
		return;
	}
	va_start(argint, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(argint, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(argint);
	printf("\n");
}
