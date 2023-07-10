#include "main.h"

/**
 * read_textfile - reads text in a file and outputs it
 * @filename: the file to be read
 * @letters: the number of letters to be read
 * Return: number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t read_bytes;
	ssize_t written;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		return (0);
	}
	read_bytes = read(fd, buffer, letters);
	if (read_bytes == -1)
	{
		return (0);
	}

	written = write(STDOUT_FILENO, buffer, strlen(buffer));
	if (written == -1)
	{
		return (0);
	}

	close(fd);
	free(buffer);
	return (written);
}
