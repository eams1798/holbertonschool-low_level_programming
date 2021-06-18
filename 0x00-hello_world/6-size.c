#include <stdio.h>
#include <stdlib.h>

/*This C file prints the size of some data types in bytes*/

int main(void)
{
	int szchr = sizeof(char);
	int szint = sizeof(int);
	int szlnt = sizeof(long int);
	int szlln = sizeof(long long);
	int szflt = sizeof(float);

	printf("Size of a char: %d byte(s)\n", szchr);
	printf("Size of an int: %d byte(s)\n", szint);
	printf("Size of a long int: %d byte(s)\n", szlnt);
	printf("Size of a long long int: %d byte(s)\n", szlln);
	printf("Size of a float: %d byte(s)\n", szflt);
	return (0);
}
