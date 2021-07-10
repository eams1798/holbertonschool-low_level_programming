#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the sum of all the numbers in the function
 * @argc: quantity of arguments of the program
 * @argv: an array of all arguments of the program
 *
 * Return: Nothing.
 */
int main(int argc, char **argv)
{
	int i, j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < (int)strlen(argv[i]); j++)
		{
			if (!(argv[i][j] >= 48 && argv[i][j] <= 57))
			{
				printf("Error\n");
				exit(1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	exit(0);
}
