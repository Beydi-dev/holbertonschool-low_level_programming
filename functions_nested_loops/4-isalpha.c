#include "main.h"

/**
 * _isalpha - say if c is alphabetic or no
 * @c : the character
 * Return: 1 if alphabetic and 0 otherwise
 */
int _isalpha(int c)
{

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
