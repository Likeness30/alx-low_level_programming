#include "main.h"

/**
 * append_text_to_file -  This appends text at the end of a file
 * @filename: The file name
 * @text_content: Content addaed
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int letters;
	int rwr;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;
		rwr = write(fd, text_content, letters);
		if (rwr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
