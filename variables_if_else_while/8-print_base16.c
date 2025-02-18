#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = '0';

	while (i >= '0' && i <= '9')
	{
		putchar (i);
		i++;
	}
	i = 'a';
	while (i >= 'a' && i <= 'f')
	{
		putchar (i);
		i++;
	}
		putchar ('\n');
	return (0);
}
