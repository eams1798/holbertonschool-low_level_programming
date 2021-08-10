#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: a string which contains the name of the file we will work
 * @text_content: a string which contains the text we will write inside the
 * file
 *
 * Return: 1 if the file exists, and -1 if the file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fl, i = 0, wr;

	if (filename == NULL)
		return (-1);
	fl = open(filename, (O_APPEND | O_WRONLY));
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
	close(fl);
	return (1);
}
