#include "holberton.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string to revert and be printed
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
		_print_rev_recursion(++s);
		s--;
		_putchar(*s);
	}
	return;
}
