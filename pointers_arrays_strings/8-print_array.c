#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array
 * @n: The parameter
 * @a: The pointer of array
 * Return: Void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i > 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}
