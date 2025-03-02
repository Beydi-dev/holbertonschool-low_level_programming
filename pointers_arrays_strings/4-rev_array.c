#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Prints the last digit of a number.
 * @a: The array of integers
 * @n: The counter
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;
	
	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
		i++;
	}
}
