#include "main.h"
/**
 * get_endianness - find type of endianness
 * Returns: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int y = 1;
	char *c = (char *)&y;

	if (*c)
		return (1);
	else
		return (0);
}
