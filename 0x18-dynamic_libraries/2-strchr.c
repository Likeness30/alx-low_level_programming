#include "main.h"

/**
 *_strchr - This function locates a character in a string
 *@s: The 1st parameter
 *@c: The 2nd parameter
 *Return: s or null
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if (*s == c)
return (s);
return (NULL);
}
