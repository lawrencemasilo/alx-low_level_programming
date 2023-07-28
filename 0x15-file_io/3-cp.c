#include "main.h"

/**
 * _open_file - open a file
 * @av: argument array
 * Return: Nothing
 */
void _open_file(char **av)
{
	int fd1, fd2;

	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "%s\n", "Error: Can't read from this file");
		exit(98);
	}
	fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR |
			S_IRGRP | S_IWGRP | S_IROTH);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "%s\n", "Error: Can't read from this file");
		exit(99);
	}
	_cp_content(fd1, fd2);
}

/**
 * _cp_content - reads and writes to a file
 * @file1: the fd for file 1
 * @file2: the fd for file 2
 * Return: Nothing
 */
void _cp_content(int file1, int file2)
{
	char *buffer[1024];
	ssize_t readn, written;

	readn = read(file1, buffer, 1024);
	if (readn == -1)
	{
		dprintf(STDERR_FILENO, "%s\n", "Error: Can't read from file1");
		exit(98);
	}
	written = write(file2, buffer, readn);
	if (written == -1)
	{
		dprintf(STDERR_FILENO, "%s\n", "Error: Can't write to file2");
		exit(99);
	}
	_close(file1, file2);
}

/**
 * _close - closes a file
 * @file1: fd for file 1
 * @file2: fd for file 2
 * Return: Nothing
 */
void _close(int file1, int file2)
{
	int closed1, closed2;

	closed1 = close(file1);
	if (closed1 == -1)
	{
		dprintf(STDERR_FILENO, "%s\n", "Error: Can't close file 1");
		exit(100);
	}
	closed2 = close(file2);
	if (closed2 == -1)
	{
		dprintf(STDERR_FILENO, "%s\n", "Error: Can't close file 2");
		exit(100);
	}
}

/**
 * main - entry point
 * @ac: argument count
 * @av: arguments
 * Return: 0 success, 1 failure
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	else
	{
		_open_file(av);
	}
	return (0);
}
