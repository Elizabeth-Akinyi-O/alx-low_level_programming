#include "main.h"
/**
 *print_triangle - prints a triangle
 *@size: size of the triangle
 *
 *Return: void
 */
void print_triangle(int size)
{
	int r;
	int s;
	int t;

	if (size  <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 1; r <= size; r++)
		{
			for (t = size - r; t >= 1; t--)
			{
				_putchar(' ');
			}
			for (s = 1; s <= r; s++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
