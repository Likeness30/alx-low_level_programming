#include "main.h"

/**
 * swap_int - This function swaps the values of two integers
 * @a: This is the first parameter
 * @b: This is the second parameter
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
