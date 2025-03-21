#ifndef CALC_H
#define CALC_H
#include <stdlib.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	/*operands*/
	char *op;
	/*pointer to calc functions*/
	int (*f)(int a, int b);
} op_t;

/*fonctions d'opérations*/
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
#endif
