#include "main.h"
/**
 *  prints the alphabet, in lowercase, followed by a new line,
 * print_alphabet - Entry point
 * Return: Always 0
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
