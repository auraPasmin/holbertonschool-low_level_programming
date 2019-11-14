#include "holberton.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: char
 * @text_content: char
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_op, i, file_wr;

	if (filename == NULL)
		return (-1);

	file_op = open(filename, O_APPEND | O_WRONLY);
	if (text_content == NULL)
		return (1);
	if (file_op == -1)
		return (-1);
	for (i = 0; text_content[i] != '\0'; i++)
		;
	file_wr = write(file_op, text_content, i);
	if (file_wr == -1)
	{
		close(file_op);
		return (-1);
	}
	close(file_op);
	return (1);
}
