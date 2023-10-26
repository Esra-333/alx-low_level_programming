#include "main.h"
/**
 * set_bit - Sets a bit at a given index to 1.
 * @n: Pointer to the number to change.
 * @index: Index of the bit to set to 1.
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n)) * 8 - 1)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
