#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - Vérifie si ne chaine ne contient que des chiffres
 * @str: La chaîne de carateres
 *
 * Return: 1 si la chaîne ne contient que des chiffres, 0 sinon.
 */
int is_number(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}


/**
 * main - additionne des nombres positifs
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 si tout est correct, 1 en cas d'erreur (argument non numérique)
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
