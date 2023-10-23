#include "main.h"
/**
 **_memcpy - copies memory area
 *@n: bytes the function copies
 *@src: memory area source
 *@dest: memory area destination
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int p;

	while (p < n)
	{
		dest[p] = src[p];
		p++;
	}
	return (dest);
}
