#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: the integer to print
 *
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int unsN, n_bckp;
	int c = 1, i;
	int pot_10 = 1;
	int digit;

	if (n < 0)
	{
		_putchar('-');
		unsN = n * (-1);
		n_bckp = unsN;
	}
	else
	{
		   unsN = n;
		      n_bckp = unsN;
	}
	while (unsN / 10 >= 1)
	{
		unsN = unsN / 10;
		c++;
	}
	c--;
	for (; c >= 0; c--)
	{
		for (i = 0; i < c; i++)
			pot_10 = pot_10 * 10;
		digit = (n_bckp / pot_10) % 10;
		_putchar('0' + digit);
		pot_10 = 1;
	}
}
