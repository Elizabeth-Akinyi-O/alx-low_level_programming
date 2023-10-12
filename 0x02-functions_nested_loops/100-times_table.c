#include "main.h"
/**
 *print_times_table - prints the n times table, starting with 0
 *@n: value of n (times to be printed)
 *
 *Return: 0
*/
void print_times_table(int n)
{
	int i;/*number*/
	int m;/*mult*/
	int p;/*prod*/

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (m = 1; m <= n ; m++)
			{
				_putchar(',');
				_putchar(' ');
				p = i * m;
				if (p <= 9)
					_putchar(' ');
				if (p <= 99)
					_putchar(' ');
				if (p >= 100)
				{
					_putchar((p / 100) + '0');
					_putchar(((p / 10)) % 10 + '0');
				}
				else if (p >= 10 && p <= 99)
				{
					_putchar((p / 10) + '0');
				}
				_putchar((p % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
