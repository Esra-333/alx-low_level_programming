#include "main.h"
/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 * Return: Always 0.
 */
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(str + 0);
		 str++;
	}
	_putchar('\n');
}
