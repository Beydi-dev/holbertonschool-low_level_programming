#include "main.h"

/**
 * _strlen - Prints the length of a string
 * @s: The parameter
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}


/**
 * create_file -function that creates a file
 * @filename: Name of the file to read.
 * @text_content: content of the file.
 *
 * Return: Number of letters printed, or 0 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_write;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		bytes_write = write(fd, text_content, _strlen(text_content));
	}
	if (bytes_write == -1)
	{
		close (fd);
		return (-1);
	}
	close(fd);
	return (1);
}
