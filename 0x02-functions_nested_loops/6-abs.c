#include "main.h"
/**
 *_abs - computes the absolute value of an integer
 *@i: number to be computed
 *Return: absolute value or 0 for otherwise
 */
int _abs(int i)
{
	if (i < 0)
	{
		int abs_val;

		abs_val = i * -1;
		return (abs_val);
	}
	return (i);
}
