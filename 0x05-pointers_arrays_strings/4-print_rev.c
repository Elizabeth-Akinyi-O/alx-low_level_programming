 #include "main.h"
/**
 *print_rev - prints a string, in reverse
 *@s: string pointer
 *Return: 0
 */
void print_rev(char *s)
{
	int begin = 0;

	while (s[begin])
		begin++;
	while (begin--)
		_putchar(s[begin]);
	_putchar('\n');
}
