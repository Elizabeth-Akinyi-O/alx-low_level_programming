#include "main.h"
#include <string.h>
/**
 *_strlen_recursion -  returns the length of a string
 *@s: string pointer
 *Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
	}
	return (strlen(s));
}
