#include <stddef.h>
#include "function_pointers.h"
/**
 *array_iterator - executes a function given
 *as a parameter on each element of an array
 *@array: array
 *@size: of the array
 *@action: pointer to the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array == NULL || action == NULL)
		return;
	for (a = 0; a < size; a++)
	{
		action(*array);
		array++;
	}
}
