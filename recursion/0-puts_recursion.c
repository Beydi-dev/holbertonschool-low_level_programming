#include "main.h"

/**
 * _puts_recursion - Locates a substring
 * @s: The parameter
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
