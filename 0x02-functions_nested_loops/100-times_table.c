#include "main.h"

/**
 * print_number - prints an integer using putchar
 *
 * @n: a number
 * Return: nothing
 */
void print_number(int n)
{
	int sizebuffer = 2, i;
	int pot_10 = 1;
	int digit;

	for (; sizebuffer >= 0; sizebuffer--)
	{
		for (i = 0; i < sizebuffer; i++)
		{
			pot_10 = pot_10 * 10;
		}
		digit = (n / pot_10) % 10;
		if (digit == 0 && ((n < 10 && sizebuffer > 0) ||
					(n >= 10 && n < 100 &&
					 sizebuffer > 1)))
			_putchar(' ');
		else
			_putchar('0' + digit);
		pot_10 = 1;
	}
}

/**
 * print_times_table - print the time table of the number in the input
 *
 * @n: a number between 0 and 15
 * Return: nothing
 */
void print_times_table(int n)
{
	int i, j, mult;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				mult = i * j;
				print_number(mult);
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
