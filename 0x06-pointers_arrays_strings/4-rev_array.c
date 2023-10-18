#include "main.h"

/**
 * reverse_array -This function reverses the content of an array of integers
 * @a: The 1st parameter given
 * @n: The second parameter given
 */

void reverse_array(int *a, int n)
{
	int o;
	int p;

	for (o = 0; o < n / 2; o++)
	{
		p = a[o];
		a[o] = a[n - 1 - o];
		a[n - 1 - o] = p;
	}
}
