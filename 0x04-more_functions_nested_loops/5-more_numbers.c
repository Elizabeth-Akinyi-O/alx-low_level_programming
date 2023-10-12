#include "main.h"
/**
 *more_numbers - prints 10 times the numbers, from 0 to 14
 *Return: void
 */
void more_numbers(void)
{
	int a;
	int b;

	for (b = 1; b <= 10; b++)/*prints 10 times*/
	{
		{
			for (a = 0; a <= 14; a++)
			{
				if (a > 9)
				{
					_putchar('0' + a / 10);/*prints the 10s digits*/
				}
				_putchar('0' + a % 10);/*prints the 1s digits*/
			}
			_putchar('\n');/*new line after each set*/
		}
	}
}
