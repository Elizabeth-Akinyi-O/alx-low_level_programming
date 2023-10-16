 #include "main.h"
/**
 *puts_half -  prints half of a string
 *prints the second half of the string
 *@str: input
 *Return: half of the string
 */
void puts_half(char *str)
{
	int i;
	int j;
	int len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	j = (len / 2);

	if ((len % 2) == 1)
		j = ((len + 1) / 2);

	for (i = j; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
