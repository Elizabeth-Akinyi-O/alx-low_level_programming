#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of
 *                 integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Description: prints the array being searched every time it changes
 *              ie at the beginning and when you search a subarray
 * Return: index where value is located. If value is not
 *         present in array or if array is NULL, return -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t a, start, end;

	if (array == NULL)
		return (-1);

	for (start = 0, end = size - 1; end >= start;)
	{
		printf("Searching in array: ");
		for (a = start; a < end; a++)
			printf("%d, ", array[a]);
		printf("%d\n", array[a]);

		a = start + (end - start) / 2;
		if (array[a] == value)
			return (a);
		if (array[a] > value)
			end = a - 1;
		else
		 start = a + 1;
	}

	return (-1);
}
