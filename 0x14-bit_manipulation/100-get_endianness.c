#include "main.h"
/**
 * get_endianness - check endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int y;

	y = 1;

	char *c = (char *)&y;

	if (*c)
		return (1);
	else
		return (0);
}
