#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create
 * @text_content: A pointer to a string to write to the file.
 * Return: If the function fails - -1. , Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int open, write, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for len = 0; text_content[len]; len++;
	}

	open = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write = write(open, text_content, len);

	if (open == -1 || write == -1)
		return (-1);
	close(open);
	return (1);
}
