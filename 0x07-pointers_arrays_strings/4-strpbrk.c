#include "main.h"

/**
 *_strpbrk - This function searches a string for any set of bytes
 *@s: The 1st parameter
 *@accept: The 2nd parameter
 *Return: matches of bytes in s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *a = accept;

		while (*a != '\0')
		{

			if (*s == *a)
			return (s);
			a++;
		}
		s++;
	}
	return (0);
}
