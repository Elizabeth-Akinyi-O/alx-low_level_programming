#include "main.h"
/**
 *print_alphabet - prints the alphabet, in lowercase
 *
 *Return: void
 */
void print_alphabet(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
