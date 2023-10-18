#include "main.h"
#include <stdio.h>

/**
 * rot13 - The function name
 * @s: The parameter
 * Return: String function
 */

char *rot13(char *s)
{
	int a, f;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
	for (f = 0; f < 52; f++)
	{
	if (s[a] == data1[f])
	{
	s[a] = datarot[f];
	break;
	}
	}
	}
	return (s);
}
