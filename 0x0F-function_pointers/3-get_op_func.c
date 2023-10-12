#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Selects correct func to perform operation asked by user
 * @s: input
 * Return: pointer to the func connected to operator given as param
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}
