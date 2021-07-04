#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 * hexD - converts a integer from base 10 to base 16 and store
 * the value in a new string
 * @src: a pointer to the string to save the number
 * @n: a integer
 *
 * Return: nothing
 */
char *hexD(char *src, int n)
{
	int i, j, k;
	int n_save = n;
	int exp16 = 1;
	int nDigits = 1;
	char arrHex[16] = "0123456789abcdef";
	int poshex;
	char digit;

	while (n / 16 > 0)
	{
		n /= 16;
		nDigits++;
	}
	nDigits--;
	k = strlen(src) - 1;
	for (i = nDigits; i >= 0; i--)
	{
		for (j = 0; j < nDigits - i; j++)
			exp16 *= 16;
		poshex = (n_save / exp16) % 16;
		digit = arrHex[poshex];
		src[k] = digit;
		exp16 = 1;
		k--;
	}
	return (src);
}

/**
 * reinit0 - converts all elements of an array in '0'
 * @s: a pointer to the array
 *
 * Return: nothing
 */
void reinit0(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] = '0';
	}
}

/**
 * print_buffer - prints a buffer
 * @b: the buffer
 * @size: the size of the buffer
 *
 * Return: nothing
 */
void print_buffer(char *b, int size)
{
	int c, i = 0;
	char hexpos[] = "00000000";
	char hexval[] = "00";
	int value;
	char *hxp, *hxv;

	if (size <= 0)
		putchar('\n');
	while (i < size)
	{
		hxp = hexD(hexpos, i);
		printf("%s: ", hxp);
		reinit0(hexpos);
		for (c = i; c < i + 10; c++)
		{
			value = *(b + c);
			if (c >= size)
				printf("  ");
			else
			{
				hxv = hexD(hexval, value);
				printf("%s", hxv);
			}
			if (c % 2 == 1)
				putchar(' ');
			 reinit0(hxv);
		}
		for (c = i; c < i + 10 && c < size; c++)
		{
			if (*(b + c) >= 32 && *(b + c) <= 126)
				putchar(*(b + c));
			else
				putchar('.');
		}
		putchar('\n');
		i += 10;
	}
}
