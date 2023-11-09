#include "variadic_functions.h"
/**
 *print_all - prints anything
 *@format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int a, status;

	char *str;
	va_list ptr;

	va_start(ptr, format);

	a = 0;
	while (format != NULL && format[a] != '\0')
	{
		switch (format[a])
		{
			case 'i':
				printf("%d", va_arg(ptr, int));
				status = 0;
				break;
			case 'c':
				printf("%c", va_arg(ptr, int));
				status = 0;
				break;
			case 'f':
				printf("%f", va_arg(ptr, double));
				status = 0;
				break;
			case 's':
				str = va_arg(ptr, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				status = 0;
				break;
			default:
				status = 1;
				break;
		}
		if (format[a + 1] != '\0' && status == 0)
			printf(", ");
		a++;
	}
	printf("\n");
	va_end(ptr);
}
