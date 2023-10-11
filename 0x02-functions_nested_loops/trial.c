#include "main.h"
/**
 *main - 'main' entry point
 *Return: always 0 (success)
 */
int main(void)
{
	int j;/*declare variables that will be used to print the string*/
	char str[15] = "_putchar";/*specify the no of character*/

	for (j = 0; j <= 15; j++)
	{
		_putchar(str[j]);
	}
	return (0);
}
