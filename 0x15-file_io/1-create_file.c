#include "main.h"

/**
 * create_file - creates a file
 * @filename: file to be created
 * @text_content: text the new file needs to content
 * Return: 1 on success, -1 on failed
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written, len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		written = write(fd, text_content, strlen(text_content));
		if (written == -1)
		{
			close(fd);
			return (-1);
		}
		len = strlen(text_content);
		if (written < len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
