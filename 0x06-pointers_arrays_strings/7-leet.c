#include "main.h"
/**
 **leet - encodes a string into 1337
 *@n: input value
 *Return: n
 */
char *leet(char *n)
{
	int a;
	int b;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	for (a = 0; n[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (n[a] == str1[b])
			{
				n[a] = str2[b];
			}
		}
	}
	return (n);
}
