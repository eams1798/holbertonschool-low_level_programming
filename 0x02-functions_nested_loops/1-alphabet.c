#include "holberton.h"
#include <unistd.h>
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

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
