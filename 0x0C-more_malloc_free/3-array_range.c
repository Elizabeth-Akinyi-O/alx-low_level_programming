#include "main.h"
#include <stdlib.h>
/**
 **array_range - creates an array of integers
 *@min: minimum value
 *@max: maximum value
 *Return: pointer or NULL
 */
int *array_range(int min, int max)
{
	int *ptr;
	/*a*/
	int a, z;

	if (min > max)
		return (NULL);
	z = max - min + 1;
	ptr = (int *) malloc(z * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (a = 0; a < z; a++)
	{
		ptr[a] = min;
		min++;
	}
	return (ptr);
}
