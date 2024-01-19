#include "main.h"
/**
 *_isalpha - checks for lowercase and uppercase character
 *@c: the character being checked
 *Return: 1 if c is lowercase || upercase and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
