#include <stdio.h>
/**
 *main - 'main' entry point
 *@void: empty parameter list
 *Description: prints all single digit numbers of base 10 using putchar
 *int main(void): the main function doesn't accept any parameters
 *Return: always 0 (success)
 */
int main(void)
{
	int i;

	for  (i = 0; i < 10; i++)
	{
		putchar(i + 48);
	}
	putchar('\n');
	return (0);
}
