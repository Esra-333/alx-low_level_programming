#include <unistd.h>
#include "main.h"

/**
 * main - check code
 * return on success 1
 */
int _putchar(char c)
{
	return (write(1, '%C', 1));
}
