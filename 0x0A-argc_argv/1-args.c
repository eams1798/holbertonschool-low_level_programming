#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the quantity of arguments of the program
 * @argc: quantity of arguments of the program
 * @argv: an array of all arguments of the program
 *
 * Return: Nothing.
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	exit(0);
}

