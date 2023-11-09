#include "variadic_functions.h"
/**
 *print_strings - prints strings
 *@separator: the string to be printed between the strings
 *@n:  number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *str;

	va_list ptr_str;

	va_start(ptr_str, n);

	for (a = 0; a < n; a++)
	{
		str = va_arg(ptr_str, char *);

		if (str == NULL)
		{
			printf("(nill)");
		}
		else
		{
			printf("%s", str);
		}
		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr_str);
}
