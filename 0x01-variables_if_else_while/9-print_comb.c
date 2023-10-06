#include <stdio.h>
/**
 *main - 'main' entry point
 *@void: empty parameter list
 *Description: prints all possible combinations of single-digit numbers
 *int main(void): the main function doesn't accept any parameters
 *Return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
