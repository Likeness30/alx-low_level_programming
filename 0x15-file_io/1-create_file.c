#include "main.h"

/**
 * create_file - This function creates a file
 * @filename: The filename
 * @text_content: The content writed in the file
 * Return: 1 0r -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int letters;

	int xyz;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";

	for (letters = 0; text_content[letters]; letters++)
		;
	xyz = write(fd, text_content, letters);
	if (xyz == -1)
		return (-1);
	close(fd);
	return (1);
}
