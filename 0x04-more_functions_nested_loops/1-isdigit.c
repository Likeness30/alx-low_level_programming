#include "main.h"
/**
 * _isdigit - This function checks if numbers are 0 - 9
 * @c: The parameter
 * Return: 0 otherwise 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);
	else
	return (0);
}
