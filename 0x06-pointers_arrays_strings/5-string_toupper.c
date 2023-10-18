#include "main.h"

/**
 * string_toupper - This is function name
 * @n: String input
 * Return: dest
 */

char *string_toupper(char *n)
{
	int e;

	e = 0;
	while (n[e] != '\0')
	{
	if (n[e] >= 'a' && n[e] <= 'z')
	n[e] = n[e] - 32;
	e++;
	}
return (n);
}
