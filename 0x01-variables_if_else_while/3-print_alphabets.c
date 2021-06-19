#include <stdio.h>

/**
 * main - Print the alphabet in lowercase and uppercase
 *
 * Return: zero
 */
int main(void)
{
	char alph, ABET;

	for (alph = 'a' ; alph <= 'z' ; alph++)
		putchar(alph);
	for (ABET = 'A' ; ABET <= 'Z' ; ABET++)
		putchar(ABET);
	putchar('\n');
	return (0);
}
