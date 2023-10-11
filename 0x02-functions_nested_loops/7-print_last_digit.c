#include "main.h"
/**
 *print_last_digit - prints the last digit of a number
 *@num: number to printed
 *Return: last digit value
 */
int print_last_digit(int num)
{
	int l_dig;

	l_dig = num % 10;
	if (l_dig < 0)
	{
		l_dig = -l_dig;
	}
	_putchar(l_dig + '0');
	return (l_dig);
}
