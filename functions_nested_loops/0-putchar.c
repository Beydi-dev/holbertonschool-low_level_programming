#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	write(1, "_putchar", 8);
	write(1, "\n", 1);
	return (0);
}
