#include "main.h"
/**
 *print_diagonal - draws a diagonal line on the terminal
 *@n: number of times the character \ should be printed
 *Return: void
 */
void print_diagonal(int n)
{
	int x;
	int y;

	if (n <= 0)
		_putchar('\n');
	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
