#include <stdio.h>

/**
 * main- This function program that prints the alphabet in lowercase
 * Return: Always return 0
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
