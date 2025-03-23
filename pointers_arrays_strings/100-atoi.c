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
	int max_int = ((unsigned int) -1) >> 1;
	int min_int = max_int - 1;

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
			if (sign == 1)
				return (max_int);
			else
				return (min_int);
		}
		i++;
	}
	return (result * sign);
}
