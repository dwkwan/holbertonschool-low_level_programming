#include "3-calc.h"
int _strcmp(char *s1, char *s2);
/**
 * get_op_funct - fucntion
 * @s: character array of operation to check
 *
 * Return: index of element or -1
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != ops[5].op)
	{
		if  (_strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
int _strcmp(char *s1, char *s2)
{
	int c;

	if (s1 == s2)
		return (0);

	for (c = 0; s1[c] == s2[c] && s1[c] != 0; c++)
	{}
	if (s1[c] > s2[c])
		return (s1[c] - s2[c]);
	else
		return (-(s2[c] - s1[c]));
}
