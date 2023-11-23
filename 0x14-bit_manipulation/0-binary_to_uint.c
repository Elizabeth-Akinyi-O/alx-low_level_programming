#include "main.h"
/**
 *binary_to_uint -  converts a binary number to
 *an unsigned int ie integer or decimal number
 *@b: points to a string of 0 and 1 chars
 *
 *Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len;
	size_t a = 0;
	size_t i = 0;
	size_t power = 1;
	size_t sum = 0;
	int base = 2;

	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
		;
	if (len == 1 && (b[0] == '0' || b[0] == '1'))
	{
		return (b[0] - 48);/*converts to a normal num*/
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
		for (i = len - 1; i > 0; i--)
		power = power * base;
		sum = sum + (power * (b[a] - 48));
		len--;
		power = 1;
	}
	return (sum);
}
