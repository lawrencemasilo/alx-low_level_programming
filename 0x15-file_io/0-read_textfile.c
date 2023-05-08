#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: the name of the file
 * @letters: number of letters that should be printed
 * Return: the actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int written, read_, fd;
	char *str;

	if (filename == NULL)
	{
		return (0);
	}

	str = malloc(sizeof(char) * letters);
	if (str == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		return (0);
	}
	read_ = read(fd, str, letters);
	if (read_ == -1)
	{
		return (0);
	}
	written = write(STDOUT_FILENO, str, read_);
	if (written == -1)
	{
		return (0);
	}
	free(str);
	close(fd);
	return (written);
}
