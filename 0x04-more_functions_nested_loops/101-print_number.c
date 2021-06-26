#include "holberton.h"

/**
 * print_number - prints an integer using putchar
 *
 * @n: a number
 * Return: nothing
 */
void print_number(int n)
{
	int n_save = n;
	int c = 1, i;
	int pot_10 = 1;
	int digit;

	while (n/10 <= -1)
	{
		n = n / 10;
		c++;
	}
	while (n/10 >= 1)
	{
		n = n / 10;
		c++;
	}
	n = n_save;

	c--;
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	for (; c >= 0; c--)
	{
		for (i = 0; i < c; i++)
		{
			pot_10 = pot_10 * 10;
		}
		digit = (n / pot_10) % 10;
		_putchar('0' + digit);
		pot_10 = 1;
	}
}
