#include "holberton.h"
/**
 * read_textfile -  Function that reads a text file and prints it to the POSIX
 * @filename: is a pointer
 * @letters: is a number o letters
 * Return: 0 or write
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fileOP, fileRead, fileWrite;

	if (filename == NULL)
		return (0);
	fileOP = open(filename, O_RDONLY);
	if (fileOP == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(letters) * letters);
	if (buff == NULL)
		return (0);

	fileRead = read(fileOP, buff, letters);
	if (fileRead == -1)
	{
		free(buff);
		close(fileOP);
		return (0);
	}
	fileWrite = write(STDOUT_FILENO, buff, fileRead);
	if (fileWrite == -1 || fileWrite != fileRead)
	{
		free(buff);
		close(fileOP);
		return (0);
	}
	free(buff);
	close(fileRead);
	return (fileWrite);
}
