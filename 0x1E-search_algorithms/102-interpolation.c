#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of
 *                integers using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Description: uses: size_t pos = low + (((double)(high - low) /
 *             (array[high] - array[low])) * (value - array[low]))
 *             to determine the probe position
 *  - Compares a value in the array to the value being searched, and prints it
 * Return: first index where value is located. If value is not
 *         present in array or if array is NULL, return -1
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t a, start, end;

	if (array == NULL)
		return (-1);

	for (start = 0, end = size - 1; end >= start;)
	{
		a = start + (((double)(end - start) / (array[end] - array[start])) *
                      (value - array[start]));
		if (a < size)
			printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", a);
			break;
		}

		if (array[a] == value)
			return (a);
		if (array[a] > value)
			end = a - 1;
		else
			start = a + 1;
	}

	return (-1);
}
