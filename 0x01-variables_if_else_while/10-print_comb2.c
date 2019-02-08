#include <stdio.h>
/**
 * main - returns 0
 *
 * Description - main returns 0
 * putchar - Prints prints the numbers from 00 to 99
 * Return: 0
 */
int main(void)
{
int i;
int num;
for (i = 48 ; i < 58 ; i++)
{
for (num = 48 ; num < 58 ; num++)
{
putchar (i);
putchar (num);
if (i <= 57 && num <= 56)
{
putchar (44);
putchar (32);
}
}
}
putchar('\n');
return (0);
}
