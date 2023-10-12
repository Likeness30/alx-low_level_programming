#include "main.h"


/**
 * print_last_digit - entry point
 * Description: This function prints the last digit of a number.
 * @a:number to compute last digit
 * Return: last digit
 */


int print_last_digit(int a)
{
	int last_digit;

	last_digit = a % 10;
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}