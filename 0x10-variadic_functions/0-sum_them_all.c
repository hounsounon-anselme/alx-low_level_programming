#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums of all its parameters.
 * @n: number of parameters
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0, sum=0; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
