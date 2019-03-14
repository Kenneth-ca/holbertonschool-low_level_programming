#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - executes a function given a parameter
 * @s: argument for the function
 *
 * Return: 0.
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
while (i < 5)
{
	if (*ops[i].op == *s)
		return (ops[i].f);
	i++;
}
printf("Error\n");
exit(99);
return (NULL);
}
