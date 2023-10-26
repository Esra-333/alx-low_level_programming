#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to char a string
 * Return: Converted number. or 0 if
 * there is one or more chars in the string
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int str_chl = 0;
	int x;

	if (!b)
		return (0);
	for (x = 0; b[x] != '\0'; x++)
		if (b[x]  != '0' && b[x] != '1')
			return (0);
	for (x = 0; b[x] != '\0'; x++)
	{
		str_chl *= 2;
		if (b[x] == '1')
		{
			str_chl += 1;
		}
	}
	return (str_chl);
}

