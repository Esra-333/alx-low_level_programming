#include <stdio.h>
#include "main.h"

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: ALways 0 (Success)
 */
int main(void)
{
	unsigned long int x, y, z, y1, y2, z1, z2;

	y = 1;
	z = 2;

	printf("%lu" , y);
		for (x = 1; x < 91; x++)
		{
			printf(", %lu", z);
			z = z + y;
			y = z - y;
		}
	y1 = y / 1000000000;
	y2 = y % 1000000000;
	z1 = z / 1000000000;
	z2 = z % 1000000000;

	for (x = 92; x < 99; ++x)
	{
		printf(", %lu", z1 + (z2 / 1000000000));
		printf("%lu", z2 % 1000000000);
		z1 = z1 + y1;
		y1 = z1 - y1;
		z2 = z2 + y2;
		y2 = z2 - y2;
	}
	printf("\n");
	return (0);
}
