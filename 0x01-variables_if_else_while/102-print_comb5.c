#include <stdio.h>
/**
 *main - 'main' entry point
 *Description: prints all possible combinations of two two-digit numbers
 *All numbers should be printed with two digits
 *1 should be printed as 01
 *Return: always 0 (success)
 */
int main(void)
{
	int i;
	int z;

	for (i = 0; i <= 98; i++)
	{
		for (z = i; z <= 99; z++)
		{
			if (i < z)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((z / 10) + 48);
				putchar((z % 10) + 48);
				if (i != 98 || z != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
