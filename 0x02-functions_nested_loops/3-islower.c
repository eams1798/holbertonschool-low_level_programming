#include "main.h"

/**
 * _islower - check if the input letter is lowercase
 *
 * @c: a letter
 * Return: 1 if the letter is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
