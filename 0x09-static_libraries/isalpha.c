#include "holberton.h"

/**
 * _isalpha - check if the input character is a letter
 *
 * @c: a letter
 * Return: 1 if the character is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
