#include <stdlib.h>
/**
 **create_array - creates an array of chars
 *and initializes it with a specific char
 *@size: data type size
 *@c: initial character
 *Return: pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;/*elements of the array*/

	if (size == 0)/*size is the same as n in my notes*/
	{
		return (NULL);
	}

	ptr = (char *) malloc(size * sizeof(char));

	if (ptr == 0)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;/**
			    *c is first character at index[0]
			    *c + 1 will print index[1]
			    */
	}
	return (ptr);
}
