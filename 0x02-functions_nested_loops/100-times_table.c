#include "holberton.h"

/**
 * print_times_table - print the time table of the number in the input
 *
 * @n: a number between 0 and 15
 * Return: nothing
 */
void print_times_table(int n)
{
	int m1, m2;
	int arrMult[n + 1][n + 1];
	int m100, m010, m001;

	if (n <= 15 && n >= 0)
	{
		for (m1 = 0; m1 <= n; m1++)
		{
			for (m2 = 0; m2 <= n; m2++)
			{
				arrMult[m1][m2] = m1 * m2;
				m100 = arrMult[m1][m2] / 100;
				m010 = (arrMult[m1][m2] % 100) / 10;
				m001 = arrMult[m1][m2] % 10;
				if (mult100 >= 1)
					_putchar('0' + m100);
				else
					_putchar(' ');
				if (m010 >= 1)
					_putchar('0' + m010);
				else
					_putchar(' ');
				_putchar('0' + m001);
				if (m2 != n)
					_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
