#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - prints all natural numbers from n to 98
 *@n: natural number to be printed
 *Return: 0
 */
void print_to_98(int n)
{
	int n;

	for (n = n; n <= 98; n++)
	{
		if (n == 98)
		{
			break;
		}
		printf("%d", n);
		printf(',');
		printf(' ');
		printf('\n');
	}
	return (0);
}
