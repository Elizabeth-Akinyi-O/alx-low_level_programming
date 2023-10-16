#include "main.h"
/**
 *rev_string - reverses a string
 *@s: string pointer
 *Return: reversed string
 */
void rev_string(char *s)
{
	int a;
	int p = 0;
	char reverse = s[0];

	while (s[p] != '\0')
		p++;
	for (a = 0; a < p; a++)
	{
		p--;
		reverse = s[a];
		s[a] = s[p];
		s[p] = reverse;
	}
}
