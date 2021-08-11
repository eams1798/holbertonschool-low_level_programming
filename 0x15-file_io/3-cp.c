#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: a string
 *
 * Return: the length of the given string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * main - this is a function to copy the content of a file inside another
 * @argc: the number of arguments
 * @argv: an array of all arguments
 *
 * Return: zero
 */
int main(int argc, char **argv)
{
	int fd1, fd2, r1, w2, c1, c2, cerror;
	char buffer[1024];

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to", 27);
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_CREAT | O_APPEND | O_TRUNC | O_WRONLY);
	r1 = read(fd1, buffer, 1024);
	if (fd1 == -1 || r1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	w2 = write(fd2, buffer, _strlen(buffer));
	if (w2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	chmod(argv[2], S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	c1 = close(fd1);
	c2 = close(fd2);
	if (c1 == -1 || c2 == -1)
	{
		cerror = (c1 == -1 ? fd1 : fd2);
		dprintf(2, "Error: Can't close fd %d\n", cerror);
		exit(100);
	}
	return (0);
}
