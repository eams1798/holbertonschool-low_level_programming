#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints every argument of the function per line
 * @argc: quantity of arguments of the program
 * @argv: an array of all arguments of the program
 *
 * Return: Nothing.
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	exit(0);
}

