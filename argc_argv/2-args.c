#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: argument count
 * @argv: argument vector
 * Return: void
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
