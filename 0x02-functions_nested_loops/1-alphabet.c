#include "main.h"
/**
 *  prints the alphabet, in lowercase, followed by a new line,
 * print_alphabet - utilizes on the _putchar function to print the alphabet a -z 
 * Return: Always 0
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
