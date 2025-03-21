#include "function_pointers.h"

/**
 * array_iterator - executes a function given on each element of an array
 * @array: Pointer to the first element of the array
 * @size: Size of the array
 * @action: function pointer that takes an int argument
 * return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}


