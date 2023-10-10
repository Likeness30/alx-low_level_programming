#include "main.h"

/**
 * print_alphabet- This function prints  alphabet, in lowercase
 * Return: Always return 0
 */

void print_alphabet(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		_putchar(b);
		_putchar(' ');
	}
}
