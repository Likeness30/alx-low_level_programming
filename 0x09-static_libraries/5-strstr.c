#include "main.h"

/**
  * _strstr - This function locates a substring
  * @needle: 1st function parameter
  * @haystack: 2nd function parameter
  * Return: NULL
  */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *A = haystack;
	char *B = needle;

	while (*A == *B && *B != '\0')
	{
	A++;
	B++;
	}
	if (*B == '\0')
	return (haystack);
	}
	return (0);
}
