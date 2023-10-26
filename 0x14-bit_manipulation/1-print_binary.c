#include "main.h"
#include <limits.h>


/**
 * print_binary - print  numbwr as binary string
 * @n: the number to print
 * return : void
 */
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, outputs = 0;

	while (bit)
	{
		if (n & 1l << --bit)
		{
			_putchar('1');
			outputs++;
		}
		else if (outputs)
			_putchar('0');
		return;
	}
	if (!outputs)
		_putchar('0');
}
