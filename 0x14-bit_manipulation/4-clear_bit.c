#include "main.h"
/**
 *clear_bit - sets the value of a bit to 0 at a given index
 *@n: input
 *@index: index starting from 0 of the bit you want to set
 *
 *Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int set2;

	set2 = 1;
	set2 = set2 << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = set2 ^ *n;
	return (1);
}
