#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: the file to append text to
 * @text_content: content to be appended
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		written = write(fd, text_content, strlen(text_content));
		if (written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
