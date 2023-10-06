#include <stdio.h>
/**
 *main - 'main' entry point
 *@void: empty parameter list
 *Description: prints all possible different combinations of two digits
 *01 and 10 are considered the same combination of the two digits 0 and 1
 *Print only the smallest combination of two digits
 *Return: always 0 (success)
 */
int main(void)
{
	int i;
	int z;

	for (i = 0; i <= 8; i++)
	{
		for (z = i + 1; z <= 9; z++)
		{
			putchar('0' + i);
			putchar('0' + z);
			if (i != 8 || z != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
