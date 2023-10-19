#include "main.h"
#include <stdio.h>
/**
 **string_toupper - changes all lowercase letters of a string to uppercase
 *@p: pointer
 *Return: pointer to dest
 */
char *string_toupper(char *p)
{
	int i = 0;

	while (p[i] != '\0')
	{
		if (p[i] >= 'a' && p[i] <= 'z')
			p[i] -= 32;
		i++;
	}
	return (p);
}
