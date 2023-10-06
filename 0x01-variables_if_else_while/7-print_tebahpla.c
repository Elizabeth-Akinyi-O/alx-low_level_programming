#include <stdio.h>
/**
 *main - 'main' entry point
 *@void: empty parameter list
 *Description: prints the lowercase alphabet in reverse
 *Return: always 0 (success)
 */
int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
