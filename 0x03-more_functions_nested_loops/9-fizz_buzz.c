#include "holberton.h"
#include <stdio.h>

void fizz_buzz(void);

/**
 * main - entry point to program
 *
 * Return: Always 0
 */

int main(void)
{
	fizz_buzz();
	return (0);
}

/**
 * fizz_buzz - prints the numbers from 1 to 100
 */

void fizz_buzz(void)
{
	int j;

	for (j = 1 ; j <= 100 ; j++)
	{
		if (j % 3 == 0 && j % 5 != 0)
			printf("Fizz ");
		else if (j % 5 == 0 && j % 3 != 0)
			printf("Buzz ");
		else if (j % 5 == 0 && j % 3 == 0)
			printf("FizzBuzz ");
			else
				printf("%i ", j);
	}
	printf("\n");
}
