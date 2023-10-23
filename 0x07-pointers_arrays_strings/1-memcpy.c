#include "main.h"

/**
 *_memcpy - This  function copies n bytes from memory area src to memory area dest
 *@dest: 1st parameter
 *@src: 2nd parameter
 *@n: 3rd parameter
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
return (dest);
}
