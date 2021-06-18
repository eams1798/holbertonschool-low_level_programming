#include <stdio.h>
#include <stdlib.h>

/*This C file prints the size of some data types in bytes*/

int main(void)
{
	int szchr = sizeof(char);
	int szint = sizeof(int);
	int szlnt = sizeof(long int);
	int szlln = 2 * sizeof(long int);
	int szflt = sizeof(float);

	printf("Size of a char: %d byte(s)", szchr);
	printf("Size of an int: %d byte(s)", szint);
	printf("Size of a long int: %d byte(s)", szlnt);
	printf("Size of a long long int: %d byte(s)", szlln);
	printf("Size of a float: %d byte(s)", szflt);
	return (0);
}
