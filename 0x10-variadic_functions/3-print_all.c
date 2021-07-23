#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - prints any type
 * @format: a list of types of arguments passed to the function
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list wholeargs;
	int i = 0;
	int count;
	char *str;

	while (format == NULL)
		return;
	count = strlen(format);
	va_start(wholeargs, format);
	while (i < count)
	{
		switch (format[i])
		{

			case 'c':
				printf("%c", va_arg(wholeargs, int));
				break;
			case 'i':
				printf("%d", va_arg(wholeargs, int));
				break;
			case 'f':
				printf("%f", va_arg(wholeargs, double));
				break;
			case 's':
				str = va_arg(wholeargs, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f'
					|| format[i] == 's') && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(wholeargs);
}
