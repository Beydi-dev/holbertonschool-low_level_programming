#include "main.h"

/**
 * print_alphabet_x10 - make alphabet x10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int c = 0;
	int i;

	while (c < 10)
	{
		i = 'a';
		while (i <= 'z')
		{
			_putchar (i);
			i++;
		}
		c++;
		_putchar ('\n');
	}
}
