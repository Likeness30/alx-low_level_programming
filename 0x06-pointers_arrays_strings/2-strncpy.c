#include "main.h"

/**
 * _strncpy - This function copies a string
 * @dest: The 1st parameter
 * @src: The 2nd parameter
 * @n: The 3rd paramater
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int c;

for (c = 0; c < n && src[c] != '\0'; c++)
while (c < n)
{
dest[c] = '\0';
c++;
}

return (dest);
}
