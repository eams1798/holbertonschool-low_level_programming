#include <stdio.h>
/**
 * print_alphabet - print the lowercase alphabet
 *
 * Return: the lowercase alphabet
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
}
