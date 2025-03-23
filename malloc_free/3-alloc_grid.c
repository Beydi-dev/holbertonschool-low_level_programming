#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array
 * @height: height of the array
 * Return: array
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/*Allocation du tableau principal (tableau de pointeurs)*/
	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
	{
		return (NULL);
	}

	/* Allocation de chaque ligne du tableau */
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);

		/* Ve©rification de le©chec d'allocati*/
		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ptr[j]);
			}
			free(ptr);
			return (NULL);
		}

		/*Initialisation de chaque element a 0 */
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
