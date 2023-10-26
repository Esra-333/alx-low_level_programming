#include "main.h"
/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: number one to be flipped
 * @m: number two to be flipped to
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int filp_num = n ^ m;
	int index = (sizeof(unsigned long int) * 8) - 1;
	int bits_flipped = 0;

	while (index >= 0)
	{
		if ((filp_num >> index) & 1)
			bits_flipped++;
		index--;
	}
	return (bits_flipped);
}
