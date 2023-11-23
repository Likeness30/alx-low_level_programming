#include "main.h"

/**
 * set_bit - This function sets the value of a bit to 1
 * @n: The parameter
 * @index: The index of numbers
 * Return: 1 if it worked, -1 if it didn't
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int y;

	if (index > 63)
		return (-1);

	y = 1 << index;
	*n = (*n | y);

	return (1);
}
