#include "main.h"
/**
 **strpbrk - searches a string for any of the bytes in the string
 *@s: string to be searched
 *@accept: set of bytes to be searched
 *
 *Return: If set is matched - a pointer to the byte in s
 *If no such byte is found - NULL
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
