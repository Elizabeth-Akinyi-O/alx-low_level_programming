#include "main.h"
/**
 *_strlen_recursion - gets the string length
 *@s: string
 *Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
/**
 *compareString - compares characters in the string
 *@s: string
 *@begin: iterator
 *@end: iterator
 *Return: int
 */
int compareString(char *s, int begin, int end)
{
	if (*(s + begin) == *(s + end))
	{
		if (begin == end || begin == end + 1)
		{
			return (1);
		}
		return (0 + compareString(s, begin + 1, end - 1));
	}
	return (0);
}
/**
 *is_palindrome - returns 1 if a string is a palindrome and 0 if not
 *@s: string
 *Return: 1 if palindrome,  0 if otherwise
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (compareString(s, 0, _strlen_recursion(s) - 1));
}
