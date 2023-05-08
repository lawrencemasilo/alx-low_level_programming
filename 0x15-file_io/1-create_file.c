#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content: the data
 * Return: 1 (successful) -1 (failed)
 */

int create_file(const char *filename, char *text_content)
{
	int written, fd;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_CREAT, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		written = write(STDIN_FILENO, text_content, strlen(text_content));
	}
	if (written == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
