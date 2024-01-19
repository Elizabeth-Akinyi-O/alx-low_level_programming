#include "main.h"
/**
 *_strpbrk - searches a string for any of the bytes in the string
 *@s: string to be searched
 *@accept: set of bytes to be searched
 *
 *Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			return (s);
		}
		s++;
	}
	return ('\0');
}
