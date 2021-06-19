#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits.
 *
 * Return: zero
 */
int main(void)
{
	int n1;
	int n2;
	int arrN[10][10];

	for (n1 = 0 ; n1 <= 9 ; n1++)
	{
		for (n2 = 0 ; n2 <= 9 ; n2++)
			arrN[n1][n2] = 10 * n1 + n2;
	}
	for (n1 = 0 ; n1 <= 9 ; n1++)
	{
		for (n2 = 0 ; n2 <= 9 ; n2++)
		{
			if (n1 < n2 ||
					(n2 != arrN[n2][n1] / 10 && n1 != arrN[n2][n1] % 10))
			{
				putchar(n1 + '0');
				putchar(n2 + '0');
				if (n1 * 10 + n2 < 89)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
