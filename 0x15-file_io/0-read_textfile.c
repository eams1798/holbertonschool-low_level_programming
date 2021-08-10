#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: a string which contains the name of the file we will work
 * @letters: the number of letters of the file that will be printed
 *
 * Return: the actual number of letters it could read and print, or 0 if there
 * was an error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fl, nbytes, wr;
	char *buffer;

	if (filename == NULL)
		return (0);
	fl = open(filename, O_RDONLY);
	if (fl == -1)
		return (0);
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	nbytes = read(fl, buffer, letters);
	close(fl);
	if (nbytes == -1)
		return (0);
	wr = write(STDOUT_FILENO, buffer, nbytes);
	if (wr == -1 || wr != nbytes)
		return (0);
	free(buffer);
	return (wr);
}
