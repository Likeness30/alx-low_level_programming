#include "main.h"

/**
 * get_bit - This function returns the value of a given index
 * @n: The parameter
 * @index: Index of the bit.
 * Return: Value of the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x;

	if (n == 0 && index < 64)
		return (0);

	for (x = 0; x <= 63; n >>= 1, x++)
	{
		if (index == x)
		{
			return (n & 1);
		}
	}

	return (-1);
}
