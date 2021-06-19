#include <stdio.h>

/**
 * main - Print hexadecimal numbers from 0 to f
 *
 * Return: zero
 */
int main(void)
{
	int n;
	char hx;

	for (n = 0 ; n <= 9 ; n++)
	{
		putchar(n + '0');
	}
	for (hx = 'a'; hx <= 'f'; hx++)
	{
		putchar(hx);
	}
	putchar('\n');
	return (0);
}
