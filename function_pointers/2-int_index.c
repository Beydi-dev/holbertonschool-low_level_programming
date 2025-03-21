#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: Pointer to the first element of the array
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: Index of the first element that matches '*cmp', returns -1 otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		cmp(array[i]);
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
