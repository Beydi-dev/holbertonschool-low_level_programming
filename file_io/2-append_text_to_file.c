#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The string
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of the file.
 * @text_content: Text to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_write;

	if (filename == NULL)
	{
		return (-1);
	}

	/* Open the file in append mode */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_write = write(fd, text_content, _strlen(text_content));
		if (bytes_write == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
