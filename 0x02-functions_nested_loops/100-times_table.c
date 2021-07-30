#include "main.h"

/**
 * print_mult - prints the multiplication of two numbers using putchar
 * @i: first number
 * @j: second number
 *
 * Return: nothing
 */
void print_mult(int i, int j)
{
	int n = i * j;
	int sizebuffer = 2, k;
	int pot_10 = 1;
	int digit = 0;

	if (j == 0)
	{
		_putchar('0' + digit);
		return;
	}
	for (; sizebuffer >= 0; sizebuffer--)
	{
		for (k = 0; k < sizebuffer; k++)
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
	int i, j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				print_mult(i, j);
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
