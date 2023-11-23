#include "main.h"
/**
 *get_bit - returns the value of a bit at a given index
 *@n: input
 *@index: index, starting from 0 of the bit you want to get
 *
 *Return:  value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a;

	if (index > sizeof(size_t) * 8)
		return (-1);
	for (a = 0; a < index; a++)
		n = n >> 1;
	return ((n & 1));
}
