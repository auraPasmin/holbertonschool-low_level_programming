#include "holberton.h"
/**
 * create_file - create a file
 *
 * @filename: is a pointer
 * @text_content: is a pointer
 * Return: On succes.
 */

int create_file(const char *filename, char *text_content)
{
	int file_d, i, wr;

	if (filename == NULL)
	{
		return (-1);
	}
	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (text_content == NULL)
	{
		return (1);
	}
	if (file_d == -1)
	{
		return (-1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
	{
	}
	wr = write(file_d, text_content, i);
	if (wr == -1)
	{
		close(file_d);
		return (-1);
	}
	close(file_d);
	return (1);
}
