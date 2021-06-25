#include <stdio.h>

/**
 * fizz_buzz - prints numbers from 0 to 100 but replacing
 * multiples of 3 by "Fizz", the multiples of 5 by "Buzz"
 * and multiples of both by "FizzBuzz"
 *
 * Return: nothing
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz");
		else if (i % 3 != 0 && i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		putchar(' ');
	}
	putchar('\n');
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	fizz_buzz();
	return (0);
}
