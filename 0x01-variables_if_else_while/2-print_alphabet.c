#include <stdio.h>
/**
 *main - 'main' entry point
 *@void: empty parameter list
 *Description: prints the alphabet in lower case
 *int main(void): the main function doesn't accept any parameters
 *Return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
