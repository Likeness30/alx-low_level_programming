#include "main.h"

/**
 * _strncat - This function concatenates two strings
 * @dest: The 1st parameter
 * @src: The 2nd parameter
 * @n: The 3rd parameter
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int b;

	for (b = 0; b < n && *src != '\0'; b++)
	{
		dest[len + b] = *src;
		src++;
	}

	dest[len + b] = '\0';
	return (dest);
}
