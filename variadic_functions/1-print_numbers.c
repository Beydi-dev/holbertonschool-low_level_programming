#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers separated by a given string
 * @separator: String to separate the numbers
 * @n: Number of integers to print
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
