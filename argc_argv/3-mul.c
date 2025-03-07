#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Prints the name of the program
 * @argc: argument count
 * @argv: argument vector
 * Return: void
 */




int main(int argc, char **argv)
{
	int total;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", total);

	return (0);

}
