#include "main.h"

/**
 * _strcpy - The function name
 * @dest: Parameter 1
 * @src: Parameter 2
 * Return: Value to *dest
 */

char *_strcpy(char *dest, char *src)
{
int a;

for (a = 0; src[a] != '\0'; a++)
{
dest[a] = src[a];
}
dest[a] = '\0';
return (dest);
}
