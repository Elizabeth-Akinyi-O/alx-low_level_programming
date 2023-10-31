#include "main.h"
#include <stdlib.h>
/**
 **str_concat - concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *Return: pointer or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	size_t length1 = 0, length2 = 0, a, b;

	/*if NULL is passed, treat it as an empty string*/
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	/*get the length of both strings*/
	while (s1[length1] != '\0')
	{
		length1++;
	}
	while (s2[length2] != '\0')
	{
		length2++;
	}
	/*allocate memory for s1 and s2 using the length*/
	ptr = (char *) malloc((length1 + length2 + 1) * sizeof(char));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (a = 0; a < length1; a++)
	{
		ptr[a] = s1[a];
	}
	for (b = 0; b <= length2; b++)
	{
		ptr[a] = s2[b];
		a++;
	}
	return (ptr);
}
