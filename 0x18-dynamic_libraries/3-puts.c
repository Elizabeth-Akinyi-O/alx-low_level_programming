#include "main.h"
/**
 *_puts - prints a string to stdout
 *@str: string pointer
 *Return: string
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
