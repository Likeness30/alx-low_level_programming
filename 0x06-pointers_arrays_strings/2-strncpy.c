#include "main.h"

/**
  * _strncpy - The function name
  * @src: The 1st function parameter
  * @dest: The 2nd function parameter
  * @n: The 3rd function parameter
  * Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

	while (c < n && src[c] != '\0')
	{
	dest[c] = src[c];
	c++;
	}
	while  (c < n)
	{
	dest[c] = '\0';
	c++;
	}
	return (dest);
}
