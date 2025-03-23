#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - Prints a char
 * @args: va_list argument
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - Prints an integer
 * @args: va_list argument
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float
 * @args: va_list argument
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Prints a string
 * @args: va_list argument
 */
void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str)
		printf("%s", str);
	else
		printf("(nil)");
}

/**
 * print_all - Prints anything based on format string
 * @format: List of types of arguments passed to the function
 *
 * Description: Supports 'c' for char, 'i' for int, 'f' for float,
 * and 's' for string. Arguments are printed separated by ", ".
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j;
	char *separator = "";
	va_list args;
	char *types = "cifs";
	void (*funcs[4])(va_list) = {print_char, print_int, print_float, print_string};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (types[j])
		{
			if (format[i] == types[j])
			{
				printf("%s", separator);
				funcs[j](args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
