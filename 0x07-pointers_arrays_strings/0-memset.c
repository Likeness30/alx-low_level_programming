#include "main.h"

/**
 * _memset - This function fills the first n bytes of a memory area
 *@s: The 1st parameter s
 *@b: The 2nd parameter b
 *@n: The 3rd parameter n
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
return (s);
}
