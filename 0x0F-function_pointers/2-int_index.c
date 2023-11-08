#include <stddef.h>
#include "function_pointers.h"
/**
 *int_index - searches for an integer
 *@array: array
 *@size: of the array
 *@cmp: function pointer
 *Return: 0  or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size == 0 || size < 0)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
			return (a);
	}
	return (-1);
}
