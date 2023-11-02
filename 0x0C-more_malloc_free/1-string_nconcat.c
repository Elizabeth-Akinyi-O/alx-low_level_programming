#include "main.h"
#include <stdlib.h>
/**
 **string_nconcat - concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *@n: element size
 *Return: pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	/**
	 *a prints length for s1, b prints length for s2
	 *and c prints the concatenated string
	 */
	size_t a, b, c;
	/**
	 *if NULL is passed, treat it as an empty string
	 *else get length for s1 and s2
	 */
	if (s1 == NULL)
		a = 0;
	else
	{
		for (a = 0; s1[a] != '\0'; a++)/*gets the length*/
			;
	}
	if (s2 == NULL)
		b = 0;
	else
	{
		for (b = 0; s2[b] != '\0'; b++)/*gets the length*/
			;
	}
	/*If n is greater or equal to the length of s2 then use the entire string s2*/
	if (b > n)
		b = n;
	/*allocate  memory*/
	ptr = (char *) malloc((a + b + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	/*concatenate the two strings*/
	for (c = 0; c < a; c++)
		ptr[c] = s1[c];
	for (c = 0; c < b; c++)
		ptr[c + a] = s2[c];
	ptr[a + b] = '\0';
	return (ptr);
}
