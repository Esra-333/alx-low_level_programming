#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum ;
	va_list argSum;

	if (n == 0)
		return (0);

	va_start(argSum, n);
	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(argSum, int);

	va_end(argSum);

	return (sum);

}
