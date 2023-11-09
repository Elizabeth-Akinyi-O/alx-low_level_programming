#include "variadic_functions.h"
/**
 *print_numbers -  prints numbers
 *@separator: string to be printed between numbers
 *@n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a, array;

	va_list ptr;

	va_start(ptr, n);

	for (a = 0; a < n; a++)
	{
		array = va_arg(ptr, const unsigned int);
		printf("%d", array);

		if (a != (n - 1) && (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
