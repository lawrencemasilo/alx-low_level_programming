#include "main.h"

/**
 * create_file - creates file with content
 * @filename: file to be created
 * @text_content: content to be written in new file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	written = write(fd, text_content, strlen(text_content));
	if (written == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
