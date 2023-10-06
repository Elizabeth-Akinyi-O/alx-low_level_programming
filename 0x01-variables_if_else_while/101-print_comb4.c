#include <stdio.h>
/**
 *main - 'main' entry point
 *Description: prints all possible different combinations of three digits
 *012, 120, 102, 021, 201, 210 are considered the same combination
 *of the three digits 0, 1 and 2
 *Print only the smallest combination of three digits
 *Return: always 0 (success)
 */
int main(void)
{
	int i;
	int z;
	int w;

	for (i = 0; i <= 7; i++)
	{
		for (z = i + 1; z <= 8; z++)
		{
			for (w = z + 1; w <= 9; w++)
			{
				putchar('0' + i);
				putchar('0' + z);
				putchar('0' + w);
				if (i != 7 || z != 8 || w != 9)
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
