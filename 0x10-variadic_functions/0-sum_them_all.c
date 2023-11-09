#include "variadic_functions.h"
/**
 *sum_them_all - returns the sum of all its parameters
 *@n: number of arguments
 *
 *Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	size_t sum = 0, a;

	va_list holder;

	va_start(holder, n);

	for (a = 0; a < n; a++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(holder, const unsigned int);
		}
	}
	va_end(holder);
	return (sum);
}
