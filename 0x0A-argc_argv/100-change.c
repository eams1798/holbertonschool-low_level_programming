#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of all the numbers in the function
 * @argc: quantity of arguments of the program
 * @argv: an array of all arguments of the program
 *
 * Return: Nothing.
 */
int main(int argc, char **argv)
{
	int numcoins = 0;
	int cent;

	if (argc != 2)
	{
		(void)cent;
		printf("Error\n");
		exit(1);
	}
	cent = atoi(argv[1]);
	if (cent / 25 > 0)
	{
		numcoins += cent / 25;
		cent %= 25;
	}
	if (cent / 10 > 0)
	{
		numcoins += cent / 10;
		cent %= 10;
	}
	if (cent / 5 > 0)
	{
		numcoins += cent / 5;
		cent %= 5;
	}
	if (cent / 2 > 0)
	{
		numcoins += cent / 2;
		cent %= 2;
	}
	if (cent > 0)
	{
		numcoins++;
	}
	printf("%d\n", numcoins);
	exit(0);
}
