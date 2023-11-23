#include "main.h"
/**
 *_print_binary- prints the binary representation of number
 *@n: input
 */
void _print_binary(unsigned long int n)
{
	if (n == 0)
		return;
	_print_binary(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
/**
 *print_binary - prints the binary representation of number
 *@n: input
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		_print_binary(n);
	}
}
