#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits.
 *
 * Return: zero
 */
int main(void)
{
	int n1;
	int n2;
	int n3;
	int arrN[10][10][10];

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			for (n3 = 0; n3 <= 9; n3++)
				arrN[n1][n2][n3] = 100 * n1 + 10 * n2 + n3;
		}
	}
	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 1; n2 <= 9; n2++)
		{
			for (n3 = 2; n3 <= 9; n3++)
			{
				if ((n1 < n2 && n2 < n3) ||
					(n3 != arrN[n3][n2][n1] / 100
					&& n2 != arrN[n3][n2][n1] / 10
					&& n1 != arrN[n3][n2][n1] % 10))
				{
					putchar(n1 + '0');
					putchar(n2 + '0');
					putchar(n3 + '0');
					if (n1 * 100 + n2 * 10 + n3 < 789)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
