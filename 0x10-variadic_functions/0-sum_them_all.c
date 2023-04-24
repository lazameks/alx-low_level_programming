#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - variadic func that returns the sum of it parameters
 * @n: the number of arguments passed
 * @...: a varaiblr number of parameter to be passed
 *
 * Return: sum or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(args, n);

	for (i = 0; i < n; i++)
		sum +=  va_arg(args, int);

	va_end(args);

	return (sum);
}
