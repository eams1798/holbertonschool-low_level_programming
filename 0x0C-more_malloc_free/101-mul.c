#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int test_error(int argc, char **argv)
{
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	for (i = 1; i <= 2; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (98);
			}
		}
	}
	return (0);
}

//this is the base
int main(int argc, char **argv)
{
	int err;
	unsigned int mul, num1, num2;

	err = test_error(argc, argv);
	if (err != 0)
		exit(98);
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;
	printf("%d\n", mul);
	exit (0);
}
