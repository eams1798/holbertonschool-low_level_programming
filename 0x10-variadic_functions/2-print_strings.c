#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: a string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list argstr;
	char *str;

	if (n == 0)
	{
		putchar('\0');
		return;
	}
	va_start(argstr, n);
	while (i < n)
	{
		str = va_arg(argstr, char *);
		printf("%s", (str == NULL ? "(nil)" : str));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	va_end(argstr);
	printf("\n");
}
