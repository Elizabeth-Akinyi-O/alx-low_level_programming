#include "main.h"
#include <stdlib.h>
/**
 **_strdup - returns a pointer to a newly allocated space in memory
 *which contains a copy of the string given as a parameter
 *@str: input
 *Return: pointer or NULL
 */
char *_strdup(char *str)
{
	char *cpystr;
	size_t n = 0;
	size_t i;

	if (str == NULL)
	{
		return (NULL);
	}
	/**
	 *string length not given..
	 *get the string length of (str)
	 */
	while (str[n] != '\0')
	{
		n++;
	}

	cpystr = (char *) malloc(n * sizeof(char));

	if (cpystr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		cpystr[i] = str[i];
	}
	return (cpystr);
}
