#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates two integers according to the external passed arguments
 * @argc: the number of arguments
 * @argv: an array containing all arguments
 *
 * Return: 0 if the function doesn't have errors
 */
int main(int argc, char **argv)
{
	int opr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2][0] != 37 && argv[2][0] != 42 && argv[2][0] != 43
				&& argv[2][0] != 45 && argv[2][0] != 47) || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] != 37 || argv[2][0] != 47) && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	opr = (get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", opr);
	exit(0);
}
