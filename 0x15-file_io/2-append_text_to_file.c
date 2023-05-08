#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: file name
 * @text_content: text to be appended
 * Return: 1 (successful) -1 (failed)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int written, fd;

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
			return (-1);
		}
	}
	close(fd);
	return (1);
}
