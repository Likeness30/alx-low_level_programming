#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - This functio prints the minimum number of coins to
 * make change for an amount of money
 * @argc: The number of arguments
 * @argv: The arguement vector
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int num, i, res;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	res = 0;

	if (num < 0)
	{
		printf("0\n");
	return (0);
	}

	for (i = 0; i < 5 && num >= 0; i++)
	{
	while (num >= coins[i])
	{
		res++;
		num -= coins[i];
	}
		printf("%d\n", res);
		return (0);
	}
	return (0);
}