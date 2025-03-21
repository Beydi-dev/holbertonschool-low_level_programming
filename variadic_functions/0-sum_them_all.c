#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - Returns the sum of all its parameters
* @n: The number of arguments to be summed
*
* Description: This function takes a variable number of arguments
* and returns their sum. If n is 0, the function returns 0.
*
* Return: The sum of the arguments, or 0 if n == 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
