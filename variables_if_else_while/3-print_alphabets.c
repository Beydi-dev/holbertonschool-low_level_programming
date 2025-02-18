#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 'a';

	while (i >= 'a' && i <= 'z')
	{
		putchar (i);
		i++;
	}
	i = 'a';
	while (i >= 'a' && i <= 'z')
	{
		putchar (i - 32);
		i++;
	}
		putchar ('\n');
	return (0);
}
