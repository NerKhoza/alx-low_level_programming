#include <stdio.h>
#include <stddef.h>

/**
 * get_op_func - main funtion
 * @s: parameter 1
 * Return: result of selected choise
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

	while (ops[i].op != NULL && *(cops[i].op) != *s)
		i++;
	return (ops[x].f);
}
