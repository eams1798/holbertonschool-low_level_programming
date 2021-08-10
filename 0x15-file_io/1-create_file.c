#include "main.h"

/**
 * create_file - creates a file and writes a string inside it
 * @filename: a string which contains the name of the file we will work
 * @text_content: a string which contains the text we will write inside the
 * file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fl, i = 0, wr;

	if (filename == NULL)
		return (-1);
	fl = open(filename, (O_EXCL | O_CREAT | O_TRUNC | O_WRONLY));
	if (fl == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
		wr = write(fl, text_content, i);
		if (wr == -1)
			return (-1);
	}
	chmod(filename, S_IRUSR | S_IWUSR);
	close(fl);
	return (1);
}
