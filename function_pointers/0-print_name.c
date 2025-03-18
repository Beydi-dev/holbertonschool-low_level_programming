#include "function_pointers.h"

/**
 * print_name - Print a name from a function pointer
 * @name: The name to print
 * @f: function pointer that takes a string argument
 * 
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	{
		f(name);
	}
}

