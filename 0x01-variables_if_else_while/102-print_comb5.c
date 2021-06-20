#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers.
 *
 * Return: zero
 */
int main(void)
{
	int n11, n12;
	int n21, n22;

	for (n11 = 0 ; n11 <= 9 ; n11++)
	{
		for (n12 = 0 ; n12 <= 9 ; n12++)
		{
			for (n21 = 0 ; n21 <= 9 ; n21++)
			{
				for (n22 = 0 ; n22 <= 9 ; n22++)
				{
					if (10 * n11 + n12 < 10 * n21 + n22)
					{
						putchar(n11 + '0');
						putchar(n12 + '0');
						putchar(' ');
						putchar(n21 + '0');
						putchar(n22 + '0');
					if (10 * n11 + n12 != 98 || 10 * n21 + n22 != 99)
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
