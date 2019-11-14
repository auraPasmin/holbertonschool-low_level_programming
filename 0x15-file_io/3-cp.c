#include "holberton.h"
/**
 * error - error because betty fails
 * @ex: is a int
 * @msg: is a pointer
 * @file: is a pointer
 */
void error(int ex, const char *msg, const char *file)
{
	dprintf(STDERR_FILENO, "%s %s\n", msg, file);
	exit(ex);
}

/**
 * main - is the main
 * @argc: is a int
 * @argv: is a double pointer
 * Return: 0
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, rd, wr, bz = 1024, close_from, close_to;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error(98, "Error: Can't read from file", argv[1]);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		error(99, "Error: Can't write to", argv[2]);
	for (rd = read(fd_from, buffer, bz); rd > 0; rd = read(fd_from, buffer, bz))
	{
		wr = write(fd_to, buffer, rd);
		if (wr == -1)
			error(99, "Error: Can't write to", argv[2]);
	}
	if (rd == -1)
		error(98, "Error: Can't read from file", argv[1]);
	close_from = close(fd_from);
	if (close_from == -1)
		error(100, "Error: Can't close fd", argv[1]);
	close_to = close(fd_to);
	if (close_to == -1)
		error(100, "Error: Can't close fd", argv[2]);
	return (0);
}
