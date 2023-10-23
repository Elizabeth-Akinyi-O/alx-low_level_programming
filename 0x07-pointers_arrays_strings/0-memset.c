#include "main.h"
/**
 **_memset -  fills memory with a constant byte
 *@s: pointer
 *@b: constant byte
 *@n: first n bytes of the memory area
 *Return: 
 */
 char *_memset(char *s, char b, unsigned int n)
{
	char memory[98];

	_memset(memory, '\0', 98);
	_putchar("%c
