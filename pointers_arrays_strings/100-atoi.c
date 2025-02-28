#include <stdio.h>

/**
 * _atoi - prints digits sign
 * @str: The number in question.
 *
 * Return: result * sign
 */

int _atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int prev_result = 0;

	while (str[i] && (str[i] < '0' || str[i] > '9'))
	{
		if (str[i] == '-')
		{
			sign = -sign;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		prev_result = result;
		result = result * 10 + (str[i] - '0');

		if (result / 10 != prev_result)
		{
			return (sign == 1) ? 2147483647 : -2147483648;
		}
		i++;
	}
	return (result * sign);
}
