#include "main.h"

/**
 *  _isalpha- Entry point
 *  Description- This function that checks for lowercase character
 *  @c: The character
 *  Return: return 1 or zero
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

