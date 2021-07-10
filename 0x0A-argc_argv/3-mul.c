#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of 2 numbers
 * @argc: quantity of arguments of the program
 * @argv: an array of all arguments of the program
 *
 * Return: Nothing.
 */
int main(int argc, char **argv)
{
	int mult;

	if (argc != 3)
	{
		printf("Error\n");
		exit(1);
	}
	mult = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mult);
	exit(0);
}
