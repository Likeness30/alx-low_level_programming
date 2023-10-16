#include "main.h"

/**
 * _puts - This is the function name
 * @str: The function parameter
 */

void _puts(char *str)
{
	int b;

for (b = 0; str[b] != '\0'; b++)
putchar (str[b]);
putchar ('\n');
}
