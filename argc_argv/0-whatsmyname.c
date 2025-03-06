#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: argument count
 * @argv: argument vector
 * Return: void
 */

int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
