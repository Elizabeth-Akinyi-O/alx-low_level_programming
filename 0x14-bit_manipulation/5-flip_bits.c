#include "main.h"
/**
 *flip_bits - returns the number of bits you would
 *need to flip to get from one number to another
 *@n: input 1
 *@m: input 2
 *
 *Return: 1 or 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int output;
	unsigned long int count;

	output = n ^ m;
	for (count = 0; output > 0;)
	{
		if ((output & 1) == 1)
			count++;
		output = output >> 1;
	}
	return (count);
}
