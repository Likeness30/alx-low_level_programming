#include "main.h"

/**
 * read_textfile -Reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file
 * @letters: The letters to readand  print
 * Return: NULL or 0.
 */

ssize_t read_textfile(const char *filename, size_t letters);
{
	int fd;
	ssize_t abc, xyz;
	char *buffer;

	if (!filename)
	{
		return (0);
	}
	f = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
	{
		return (0);
	}
	abc = read(fd, buffer, letters);
	xyz = write(STDOUT_FILENO, buffer, xyz);
	close(fd);
	free(buffer);
	return (xyz);
}
