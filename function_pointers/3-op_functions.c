#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * op_add - Returns the sum of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);

}

/**
 * op_sub - Returns the difference between two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the quotient of two integers
 * @a: First integer (dividend)
 * @b: Second integer (divisor)
 *
 * Return: Quotient of a divided by b
 * If b is 0, prints an error message and exits with status 100.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of two integers
 * @a: First integer (dividend)
 * @b: Second integer (divisor)
 *
 * Return: Remainder of a divided by b
 * If b is 0, prints an error message and exits with status 100.
 */
int op_mod(int a, int b)
{
if (b == 0)
{
	printf("Error\n");
	exit(100);
}
else
	return (a % b);
}
