#include "main.h"
/**
 * print_alphabet - Entry point
 * Return:0
 */

void print_alphabet(void)
{
	int i = 'a';

	while (i >= 'a' && i <= 'z')
	{
		_putchar (i);
		i++;
	}
	_putchar ('\n');
}
