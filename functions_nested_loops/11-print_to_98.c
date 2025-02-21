#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 *
 * @n: The starting number
 *
 * Description: Prints numbers from n to 98, separated by commas
 * and spaces, followed by a new line.
 */

void print_to_98(int n)
{
	int i = n;

	while (i < 98)
	{
		printf("%d, ", i);
		i++;
	}
	if (n > 98)
	{
		printf("%d, ", i);
		i--;
	}
	else
		printf("98");
}
