#include "main.h"
#include <math.h>
/**
 *_sqrt_recursion - natural square root of a number
 *@n: input value
 *Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n != 0)/*no root for -ve numbers*/
	{
		return (-1);
	}
	if (n == 0 || n == 1)/*square root of 0 0r 1 is itself that's why we return n*/
	{
		return (n);
	}
	return (_sqrt_recursion(n + 1));
}
