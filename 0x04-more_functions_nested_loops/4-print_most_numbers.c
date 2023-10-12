#include "main.h"
/**
 *print_most_numbers - prints the numbers, from 0 to 9. Do not print 2 and 4
 *Return: 0
 */
void print_most_numbers(void)
{
	int w;

	for (w = '0'; w <= '9'; w++)
	{
		if (w != '2' && w != '4')
		_putchar(w);
	}
	_putchar('\n');
}
