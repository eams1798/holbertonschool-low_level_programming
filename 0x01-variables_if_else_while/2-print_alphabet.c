#include <stdio.h>

/**
 * main - Print the alphabet in lowercase
 *
 * Return: zero
 */
int main(void)
{
	char alph;

	for (alph = 'a' ; alph <= 'z' ; alph++)
		putchar(alph);
	putchar('\n');
	return (0);
}
