#include "holberton.h"

/**
 * jack_bauer - Print every minute of the day
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int h1, h2, m1, m2;
	int ch, cm;

	for (ch = 0; ch < 24; ch++)
	{
		for (cm = 0; cm < 60; cm++)
		{
			h1 = ch / 10;
			h2 = ch % 10;
			m1 = cm / 10;
			m2 = cm % 10;
			_putchar('0' + h1);
			_putchar('0' + h2);
			_putchar(':');
			_putchar('0' + m1);
			_putchar('0' + m2);
			_putchar('\n');
		}
	}
}
