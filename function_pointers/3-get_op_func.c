#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - Retrieves the function corresponding to an operator.
 * @s: Operator as a string.
 *
 * Return: Pointer to the corresponding function, or NULL if invalid.
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	/*Array of structures that provides use of loops or switch case*/
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

/*iterating through the array with integer i to find a match*/
while (ops[i].op)
{
	if (*s == *ops[i].op)
	{
		return (ops[i].f);
	}
	i++;
}
return (NULL);
}
