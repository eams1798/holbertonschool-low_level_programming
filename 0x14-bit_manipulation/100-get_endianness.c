#include <stdint.h>

/**
 * get_endianness - checks the endianness of the system
 *
 * Return: Nothing
 */
int get_endianness(void)
{
	int16_t i = 1;
	int8_t *p = (int8_t *)&i;

	return (*p);
}
