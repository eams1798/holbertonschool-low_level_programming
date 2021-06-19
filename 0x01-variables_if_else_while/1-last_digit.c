#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Check if the last digit of a random number is greater than 5,
 * zero or less than 6 but no zero
 *
 * Return: zero
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, last);
	}
	else if (last == 0)
	{
		printf("Last digit of %d is %d and is 0", n, last);
	}
	else if (last < 6 && last != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last);
	}
	return (0);
}
