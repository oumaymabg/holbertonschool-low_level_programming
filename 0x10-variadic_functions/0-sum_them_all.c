#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Sums number of arguments
 * @n: number of iterations
 * Return: Returns an int
**/
int sum_them_all(const unsigned int n, ...)
{
if (n != 0)
{
	unsigned int sum = 0, i;
	va_list ls;

	va_start(ls, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ls, int);

	va_end(ls);

	return (sum);
}
return (0);
}
