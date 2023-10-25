#include "main.h"
/**
 *_print_rev_recursion - prints a string in reverse
 *@s: pointer to the string
 *Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);/*write the rev command first*/
		_putchar(*s);/*then print*/
		/**
		 *use +1 since the rev command automatically
		 *reverses the order of the string
		 */
	}
}
