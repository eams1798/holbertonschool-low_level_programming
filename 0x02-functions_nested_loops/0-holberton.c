#include "holberton.h"

/**
 * main - Print the word "Holberton"
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char h[] = "HolbertonSchool";
	int n = sizeof(h);
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(h[i]);
	}
	_putchar('\n');
	return (0);
}
