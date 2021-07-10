#include "holberton.h"

/**
 * _isdigit - checks for a digit
 *
 * @c: a character or digit
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	int dgt;

	if (c >= 48 && c <= 57)
		dgt = 1;
	else
		dgt = 0;
	return (dgt);
}
