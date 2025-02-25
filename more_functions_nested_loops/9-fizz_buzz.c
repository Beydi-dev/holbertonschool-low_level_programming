#include <stdio.h>

/**
 * main - Prints the last digit of a number.
 *
 * Return: fizz or buzz or fizz buzz or number
 */

int main(void)
{
	int i = 1;

	while (i < 100)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if ((i % 3 != 0) && (i % 5 != 0))
		{
			printf("%d", i);
		}
		i++;
	}
	return (0);
}
