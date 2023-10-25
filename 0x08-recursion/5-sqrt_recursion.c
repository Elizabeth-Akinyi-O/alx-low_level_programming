#include "main.h"
/**
 *num - finds the square root of natural numbers square root numbers
 *@n: natural number
 *@sqRoot: square root to be found
 *Return: -1 if n does not have a natural square root
 *and 0 if otherwise
 */
int num(int n, int sqRoot)
{
	if (n * n == sqRoot)
	{
		return (n);
	}
	if (n == sqRoot)
	{
		return (-1);
	}
	return (1 * num(n + 1, sqRoot));
}
/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: natural number
 *Return: n natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (num(1, n));
}
