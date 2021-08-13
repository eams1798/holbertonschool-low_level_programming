#include "main.h"

/**
 * read_and_write - reads a file and writes its content inside other file
 * @fd1: file descriptor of the reading file
 * @fd2: file descriptor of the writing file
 * @buf: a buffer to transfer the content of the reading file
 * @f1: The name of the reading file
 * @f2: The name of the writing file
 *
 * Return: nothing
 */
void read_and_write(int fd1, int fd2, char *buf, char *f1, char *f2)
{
	int r1, w2;

	while (1)
	{
		r1 = read(fd1, buf, 1024);
		if (r1 == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n",
					f1);
			exit(98);
		}
		w2 = write(fd2, buf, r1);
		if (w2 == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", f2);
			exit(99);
		}
		if (w2 < 1024)
		{
			break;
		}
	}
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
	int fd1, fd2, c1, c2;
	char buffer[1024];

	if (argc != 3)
	{
		write(2, "Usage: cp file_from file_to\n", 27);
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_APPEND | O_TRUNC | O_WRONLY,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	read_and_write(fd1, fd2, buffer, argv[1], argv[2]);
	c1 = close(fd1);
	c2 = close(fd2);
	if (c1 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (c2 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
