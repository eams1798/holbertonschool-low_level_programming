#include <stdio.h>

/**
 * main - Print the alphabet in lowercase and uppercase
 * except the letters 'q' and 'e'
 *
 * Return: zero
 */
int main(void)
{
	char alph;

	for (alph = 'a' ; alph <= 'z' ; alph++)
	{
		if (alph != 'e' && alph != 'q')
			putchar(alph);
	}
	putchar('\n');
	return (0);
}
