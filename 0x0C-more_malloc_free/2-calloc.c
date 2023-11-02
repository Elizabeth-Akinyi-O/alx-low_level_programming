#include "main.h"
#include <stdlib.h>
/**
 **_calloc - allocates memory for an array
 *@nmemb: block of memory
 *@size: size of elements
 *Return: pointer or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	size_t a;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	/*allocate memory using calloc method of n*sizeof*/
	ptr = (char *) malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	/*initialise the value of ptr to zero*/
	for (a = 0; a < (nmemb * size); a++)
		ptr[a] = 0;
	return (ptr);
}
