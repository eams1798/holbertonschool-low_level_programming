#include <stdio.h>

/**
 * main - Print all the digit numbers from 0 to 9
 * using only putchar
 *
 * Return: zero
 */
int main(void)
{
	int n[10];
	int i;

	for (i = 0; i <= 9; i++)
		n[i] = i;
	for (i = 0; i <= 9; i++)
		putchar(n[i] + '0');
	putchar('\n');
	return (0);
}
