#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbe rs
 * @argv: array of pointers to strings
 * @argc: argument count
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, c, j;
	int sum = 0;

	for (c = 1; *argv + c != argv[argc]; c++)
	{
		for (j = 0; **argv + j != '\0'; j++)
		{
			if (**argv + j <= '0'
			    && **argv + j >= '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
			}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
