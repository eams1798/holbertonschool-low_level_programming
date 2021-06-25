#include "holberton.h"

/**
 * more_numbers - prints the numbers from 0 to 14, 10 times
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			k = j;
			if (k >= 10)
			{
				k = k % 10;
				_putchar('1');
			}
			_putchar(k + '0');
		}
		_putchar('\n');
	}
}
