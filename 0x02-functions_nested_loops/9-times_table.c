#include "main.h"

/**
 * times_table - print the 9 times table
 *
 * Return: nothing
 */

void times_table(void)
{
	int m1, m2;
	int arrMult[10][10];
	int mult10, mult01;

	for (m1 = 0; m1 <= 9; m1++)
	{
		for (m2 = 0; m2 <= 9; m2++)
		{
			arrMult[m1][m2] = m1 * m2;
			mult10 = arrMult[m1][m2] / 10;
			mult01 = arrMult[m1][m2] % 10;
			if (mult10 >= 1)
				_putchar('0' + mult10);
			else
			{
				if (m2 != 0)
					_putchar(' ');
			}
			_putchar('0' + mult01);
			if (m2 != 9)
			{	_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
