#include <stdio.h>

void print_first(void) __attribute__ ((constructor));
void do_nothing(void) __attribute__ ((destructor));

/**
 * print_first - prints a string before the main function is executed
 *
 * Return: nothing
 */
void print_first(void)
{
	    printf("You're beat! and yet, you must allow,\n");
	    printf("I bore my house upon my back!\n");
}

/**
 * do_nothing - do nothing
 *
 * Return: nothing
 */
void do_nothing(void)
{
}
