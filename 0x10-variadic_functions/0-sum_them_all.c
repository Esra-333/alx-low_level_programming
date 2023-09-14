#include "variadic_functions.h"
/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list List;

	va_start(List, n);

	for (i = 0; i < n; i++)
		sum += va_arg(List, int);
	va_end(List);

	return (sum);
}
