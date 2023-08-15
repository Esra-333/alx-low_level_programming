#include "main.h"
/**
 * main - prints the alphabet, in lowercase, followed by a new line,
 * Return: Always 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return (0);
}
