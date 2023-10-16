#include "main.h"
/**
 *puts2 - prints every other character of a string
 *starting with the first character
 *@str: input
 *Return: 0
 */
void puts2(char *str)
{
	int i = 0;
	int j = 0;
	int k;
	char *p = str;

	while (*p != '\0')
	{
		p++;
		i++;
	}
	j = i - 1;
	for (k = 0; k <= j; k++)
	{
		if (k % 2 == 0)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
