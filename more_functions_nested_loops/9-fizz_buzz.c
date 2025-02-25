#include <stdio.h>

/**
 * main - Prints the last digit of a number.
 *
 * Return: fizz or buzz or fizz buzz or number
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{

		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		if (i < 100)
			putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
