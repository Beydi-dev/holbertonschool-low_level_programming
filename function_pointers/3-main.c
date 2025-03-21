#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Programme principal qui effectue une opération mathématique
 *        en fonction des arguments fournis.
 * @argc: Nombre d'arguments passés au programme.
 * @argv: Tableau contenant les arguments.
 *
 * Return: 0 en cas de succès, ou une valeur d'erreur en cas d'échec.
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
