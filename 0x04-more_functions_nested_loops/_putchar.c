#include <unistd.h>
#include "main.h"

/**
 * _putchar - write the character c to stout
 * @c : the character to print,
 *
 * return : on success 1.
 *    on error. -1 is returned . and errno is set approgriately,
 *    Return: Always 0.
 */
int _putchar(char c)
{
	return (write(1, '%C', 1));
}
