#include "main.h"
#define BUFLEN 1024
/**
 * finsh_function - function that deals with all standard errors
 * @num: exit status number or file descriptor
 * @str: file name either in_file or out_file, or NULL
 * Return: 97, 98, 99, or 100 depending on input num
 */
int finsh_function(int num, char *str)
{
	int value;

	switch (num)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			value = 97;
			break;
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
			value = 98;
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
			value = 99;
			break;
default:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d", num);
			value = 100;
			break;
	}
	return (value);
}
/**
 * main - copies the content of a file to another file
 *  @argc: arguments count
 *  @argv: pointer to list of argument strings
 *  Return: 0 on success, 97, 98, 99, or 100 on failure
 */
int main(int argc, char **argv)
{
	int fd_in, fd_out, prev_cos;
	char *file_out, file_in, buffer[BUFLEN];

	if (argc != 3)
		exit(finsh_function(97, NULL));
	file_out = argv[1], file_in = argv[2];
	fd_out = open(file_out, O_RDONLY);

	if (fd_out == -1)
		exit(finsh_function(98, file_out));
	fd_in = open(file_in, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_in == -1)
		exit(close(fd_out) == -1 ? finsh_function(fd_out, NULL) :
				finsh_function(99, file_in));
	prev_cos = read(fd_out, &buffer, BUFLEN);
	while (prev_cos)
	{
		if (prev_cos == -1)
			exit(close(fd_out) == -1 ? finsh_function(fd_out, NULL) :
					close(fd_in) == -1 ? finsh_function(fd_in, NULL) :
					finsh_function(98, file_out));

		if (write(fd_in, &buffer, prev_cos) == -1)
			exit(finsh_function(99, file_in));
		prev_cos = read(fd_out, &buffer, BUFLEN);
	}
	return (close(fd_out) == -1 ? finsh_function(fd_out, NULL) :
			close(fd_in) == -1 ? finsh_function(fd_in, NULL) : 0);
}
