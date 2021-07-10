#include "holberton.h"

/**
 * _isupper - checks for uppercase characters
 *
 * @c: a character
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	int upr;

	if (c >= 65 && c <= 90)
		upr = 1;
	else
		upr = 0;
	return (upr);
}
