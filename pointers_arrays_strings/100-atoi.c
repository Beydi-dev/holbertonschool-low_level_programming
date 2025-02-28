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
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
