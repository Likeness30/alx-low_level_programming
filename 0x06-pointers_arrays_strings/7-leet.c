#include "main.h"
#include <stdio.h>
/**
  *leet - This is the function name
  * @n: The function paramete
  *Return: Value of n
 */

char *leet(char *n)
{
	int f, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (f = 0; n[f] != '\0'; f++)
	{
	for (j = 0; j < 10; j++)
	{
	if (n[f] == s1[j])
	{
	n[f] = s2[j];
	}
	}
	}
	return (n);
}
