#include "main.h"

/**
 * print_square - Prints a square
 * @size: format of the squae
 *
 * Return: Value of the last digit.
 */

void print_square(int size)
{
	int idx1, idx2;

	for (idx1 = 0; idx1 < size; idx1++)
	{
		for (idx2 = 0; idx2 < size; idx2++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
