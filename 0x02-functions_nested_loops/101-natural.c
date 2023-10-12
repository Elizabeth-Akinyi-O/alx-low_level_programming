#include <stdio.h>
/**
 *main - prints the sum of all the multiples of 3 or 5 below 1024 (excluded)
 *
 *Return: 0
*/
int main(void)
{
	int a;
	int b;

	while (a < 1024)
	{
		if (a % 15 == 0)
		{
			b = b + a;
		}
		a++;
	}
	printf("%d'n", b);
	return (0);
}
