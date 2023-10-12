#include <stdio.h>
#include "main.h"
/**
 *main - finds and prints the largest prime factor of the number 612852475143
 *
 *Return: void
 */
int main(void)
{
	unsigned long int i, num = 612852475143;

	for (i = 3; i < 782848; i = i + 2)
	{
		while ((num % i == 0) && (num != i))
			num = num / i;
	}
	printf("%lu\n", num);
	return (0);
}
