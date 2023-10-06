#include <stdio.h>


/**
 * main- This prints the lowercase alphabet in reverse
 * Return: Always  return 0
 */

int main(void)
{
char letter;
for (letter = 'z'; letter >= 'a'; letter--)
putchar(letter);
putchar('\n');
return (0);
}
