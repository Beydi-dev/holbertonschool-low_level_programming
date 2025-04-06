#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the standard output.
 * @filename: Name of the file to read.
 * @letters: Number of letters to read and print.
 *
 * Return: Number of letters printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes_read;
	ssize_t bytes_write;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		return (0);
	}

	bytes_write = write(1, buffer, bytes_read);
	if (bytes_read != bytes_write)
	{
		return (0);
	}
	free(buffer);
	close(fd);
	return (bytes_write);
}
