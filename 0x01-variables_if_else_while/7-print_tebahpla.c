#include <stdio.h>

/**
 * main - Print all the lowercase alphabet in reverse
 *
 * Return: zero
 */
int main(void)
{
	char alph;

	for (alph = 'z' ; alph >= 'a' ; alph--)
		putchar(alph);
	putchar('\n');
	return (0);
}
