#include "main.h"

/**
 * rev_string - reverse a string
 * @s: The pointer as parameter
 *
 * Return: Reversed string
 */

void rev_string(char *s)
{
	char *debut = &s[0];
	char temp = *debut;
	char *fin = &s[0];

	while (*fin != 0)
	{
		fin++;
	}
	fin--;
	while (fin > debut)
	{
		temp = *debut;
		*debut = *fin;
		*fin = temp;
		debut++;
		fin--;
	}
}
