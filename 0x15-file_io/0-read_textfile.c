#include "main.h"

/**
 * read_textfile - Reads a text file and prints in POSIX stdout
 * @filename: File 2 read.
 * @letters: Number of letter it should read and print
 * Return: Actual number of letter it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, size;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	if (!filename)
		return (0);
	if (!buffer)
		return (0);
	fd = open(filename, O_RDONLY);

	size = write(STDOUT_FILENO, buffer, read(fd, buffer, letters));
	if (fd == -1 || size == -1)
		return (0);
	close(fd);
	free(buffer);
	return (size);
}
