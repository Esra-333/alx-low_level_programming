#include "main.h"
/**
 * clear_bit - Sets the value of a given bit to 0.
 * @n: Pointer 2 the number to change.
 * @index: Index of the bit to clear
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num = *n;

	if (index > sizeof(8) * 8)
		return (-1);
	num &= ~(1 << index);
	*n = num;
	return (1);
}
