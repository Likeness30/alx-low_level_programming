#include "main.h"

/**
 * clear_bit - This function sets the value of a bit to 0
 * @n: The parameter
 * @index: index of the bit
 * Return: 1 if it worked, -1 if it didn't
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k;

	if (index > 63)
		return (-1);

	k = 1 << index;

	if (*n & k)
		*n ^= k;

	return (1);
}
