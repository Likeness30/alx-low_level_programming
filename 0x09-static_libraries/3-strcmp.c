#include "main.h"

/**
 * _strcmp - This function compares 2 string
 * @s1: The first parameter
 * @s2: The second parameter
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
int d;

for (d = 0; s1[d] != '\0' || s2[d] != '\0'; d++)
{
	if (s1[d] != s2[d])
	{
	if (s1[d] < s2[d])
		return (s1[d] - s2[d]);

	else if (s2[d] < s1[d])
	return (s1[d] - s2[d]);

}
}
	return (0);
}
