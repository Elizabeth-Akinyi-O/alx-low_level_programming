#include "main.h"
/**
 **rot13 - encodes a string using rot13
 *@s: pointer to string parameter
 *Return: *s
 */
char *rot13(char *s)
{
	int a;
	int b;
	char str1[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char strrot[] =
"NOPQRSTUVWXYZABCDEFGHIJLKMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (s[a] == str1[b])
			{
				s[a] = strrot[b];
				break;
			}
		}
	}
	return (s);
}
