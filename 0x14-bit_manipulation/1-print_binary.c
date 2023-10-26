#include "main.h"

/**
 * print_binary - print  numbwr as binary string
 * @n: the number to print
 * return : void
 */
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8;

	num_printed = 0;

	while (bit)
	{
		if (n & 1l << --bit)
		{
			-putchar ('1');
			num_printed++;
		}
		else if (num_printed)
			-putchar('0');
	}
	if (!num_printed)
		-putchar('0');
}
