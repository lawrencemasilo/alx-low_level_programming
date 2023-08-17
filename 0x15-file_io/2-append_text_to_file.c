#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to be appended
 * @text_content: text to append
 * Return: 1 if success, on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written;

	if (text_content == NULL)
		return (1);
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	written = write(fd, text_content, strlen(text_content));
	if (written == -1)
		return (-1);
	close(fd);
	return (1);
}
