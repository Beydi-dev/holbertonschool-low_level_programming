#include "main.h"
#include "2-strlen.c"

/**
 * _strdup - copy of str to a newly allocated space
 * @str: the string in parameter
 * Return: char
 */

char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	char *ptr = malloc(strlen(str) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	int i = 0;

	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
