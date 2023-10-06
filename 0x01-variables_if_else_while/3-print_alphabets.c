#include <stdio.h>
/**
 *main - 'main' entry point
 *@void: empty parameter list
 *Description:  prints the alphabet in lowercase, and then in uppercase
 *int main(void): the main function doesn't accept any parameters
 *Return: always 0 (success)
 */
int main(void)
{
	int i = 97;
	int u = 65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	while (u <= 90)
	{
		putchar(u);
		u++;
	}
	putchar('\n');
	return (0);
}
