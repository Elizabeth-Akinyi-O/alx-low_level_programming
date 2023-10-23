#include "main.h"
/**
 **_memset -  fills memory with a constant byte
 *@s: pointer
 *@b: constant byte
 *@n: first n bytes of the memory area
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
	{
		s[p] = b;
	}
	return (s);
}
