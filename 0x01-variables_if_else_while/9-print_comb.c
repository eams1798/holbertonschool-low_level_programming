#include <stdio.h>

/**
 * main - Print numbers from 0 to 9 separated by commas
 * and a space
 *
 *
 *  Return: zero
 */
int main(void)
{
	int n;

	for (n = 0 ; n <= 9 ; n++)
	{
		putchar(n + '0');
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
