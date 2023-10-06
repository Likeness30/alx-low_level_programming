#include <stdio.h>

/**
 * main - This prints the alphabet in lowercase and upper case
 * Return: Always return 0.
 */

int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'e' && letter != 'q')
putchar(letter);
}
putchar('\n');
return (0);
}
