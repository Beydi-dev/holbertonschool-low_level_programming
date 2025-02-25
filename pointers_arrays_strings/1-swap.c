#include "main.h"

/**
 * swap_int - Prints the last digit of a number.
 * @a:first pointer to an int
 * @b: second pointer to an int
 *
 * Return: Swapped values
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
