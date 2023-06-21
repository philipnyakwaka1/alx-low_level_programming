#include <stdio.h>
#include "3-calc.h"
#include <string.h>
/**
 * get_op_func - selects the correc
 * t function to perform the operation asked by the use
 * @s: input operator
 * Return: a pointer to the function needed to perform the operation
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (*(ops[i]).f);
		}
	}
	return (NULL);
}
