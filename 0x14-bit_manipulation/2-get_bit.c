#include "main.h"
/**
 * get_bit - gets the bit og given index
 * @n: number to index
 * @index: the bit to get
 * Return: Value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
