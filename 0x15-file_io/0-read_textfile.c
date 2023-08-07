#include "main.h"

/**
 * read_textfile - reads text and outputs it
 * @filename: file with text
 * @letters: number of letters to read
 * Return: number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buffer[1024];
	int fd, written, readn;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	readn = read(fd, buffer, letters);
	if (readn == -1)
	{
		return (0);
	}
	written = write(STDOUT_FILENO, buffer, readn);
	if (written == -1)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (readn);
}
