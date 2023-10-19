#include "main.h"
#include <stdio.h>
/**
 **cap_string - capitalizes all words of a string
 *Separators of words: space, tabulation, new line,
 *,, ;, ., !, ?, ", (, ), {, and }
 *@str: string to be capitalised
 *Return: pointer to the changed string
 */
char *cap_string(char *str)
{
	int ind = 0;

	while (str[ind])
	{
		while (!(str[ind] >= 'a' && str[ind] <= 'z'))
			ind++;
		if (str[ind - 1] == ' ' ||
		str[ind - 1] == '\t' ||
		str[ind - 1] == '\n' ||
		str[ind - 1] == ',' ||
		str[ind - 1] == ';' ||
		str[ind - 1] == '.' ||
		str[ind - 1] == '!' ||
		str[ind - 1] == '?' ||
		str[ind - 1] == '"' ||
		str[ind - 1] == '(' ||
		str[ind - 1] == ')' ||
		str[ind - 1] == '{' ||
		str[ind - 1] == '}' ||
		ind == 0)
			str[ind] -= 32;
		ind++;
	}
	return (str);
}
