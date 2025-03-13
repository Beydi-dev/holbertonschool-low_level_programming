#include"main.h"
#include<stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: value min of the array
 * @max: value max of the array
 * Return: int*
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, j;

	if (min > max)
	{
		exit(1);
	}
	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
	{
		exit(1);
	}
	for (i = min, j = 0; i <= max; i++, j++)
	{
		ptr[j] = i;
	}
	return (ptr);
}
