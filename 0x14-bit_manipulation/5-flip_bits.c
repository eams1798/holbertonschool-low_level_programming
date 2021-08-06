#include <stdlib.h>
#include <stddef.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to extract its index
 * @index: the index of the given number
 *
 * Return: the value of a bit at a given index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}

/**
 * store_bin - stores a binary number in a string
 * @n: the number to convert to binary and store in an string
 * @buffer: a buffer for the string
 *
 * Return: a string with the binary number
 */
char *store_bin(unsigned long int n, int buffer)
{
	char *str = malloc(buffer * sizeof(char));
	int i;

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (i = buffer - 2; i >= 0; i--)
		str[i] = (get_bit(n, buffer - i - 2) + '0');
	str[buffer - 1] = '\0';
	return (str);
}

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 * @n: first number
 * @m: second number
 *
 * Return: the number of bits you would need to flip to get from one number
 * to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	char *strN, *strM;
	int buffer, cn = 1, cm = 1, flipcount = 0;
	unsigned long int auxN = n, auxM = m;

	while (auxN > 1)
	{
		auxN = auxN >> 1;
		cn++;
	}
	while (auxM > 1)
	{
		auxM = auxM >> 1;
		cm++;
	}
	if (cn >= cm)
		buffer = cn;
	else
		buffer = cm;
	buffer++;
	strN = store_bin(n, buffer);
	strM = store_bin(m, buffer);
	if (strN == NULL || strM == NULL)
	{
		free(strN);
		free(strM);
		return (-1);
	}
	buffer--;
	while (*strN != '\0')
	{
		if (*strN != *strM)
			flipcount++;
		strN++;
		strM++;
	}
	strN -= buffer;
	strM -= buffer;
	free(strN);
	free(strM);
	return (flipcount);
}
