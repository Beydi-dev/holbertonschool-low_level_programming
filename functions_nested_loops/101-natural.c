#include <stdio.h>

/**
 * main - Computes and prints the sum of all multiples of 3 or 5 below 1024
 *
 * Description: This program iterates from 0 to 1023, adding to the sum
 * all numbers that are divisible by 3 or 5. Finally, it prints the result.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int n = 1024;
	int sum = 0;

	for (i = 0; i < n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
		sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
