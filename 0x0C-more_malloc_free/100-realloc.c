#include "main.h"
#include <stdlib.h>
/**
 **_realloc - reallocates a memory block using malloc and free
 *@ptr: pointer to new memory
 *@old_size: the initial memory allocated
 *@new_size: new memory allocated
 *Return: pointer to new memory or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	/*n = element size*/
	size_t n;
	size_t m = new_size;
	char *orig_ptr = ptr;

	if (ptr == NULL)
	{
		p = (char *) malloc(new_size);
			return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	p = (char *) malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		m = old_size;
	for (n = 0; n < m; n++)
		p[n] = orig_ptr[n];
	free(ptr);
	return (p);
}
