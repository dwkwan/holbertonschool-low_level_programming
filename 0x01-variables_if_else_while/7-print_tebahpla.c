#include <stdio.h>
/**
 * main - returns 0
 *
 * Description - main returns 0
 * putchar - Prints the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
