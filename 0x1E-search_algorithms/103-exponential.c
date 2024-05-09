#include "search_algos.h"

/**
  * _binary_search - Searches for a value in a sorted array
  *                  of integers using binary search.
  * @array: a pointer to the first element of the array to search.
  * @start: starting index of the [sub]array to search.
  * @end: ending index of the [sub]array to search.
  * @value: value to search for.
  *
  * Description: Compares a value in the array to the value being
  *              searched, and prints it
  *
  * Return: index where the value is located. If the value is not present
  *         or the array is NULL, -1.
  */
int _binary_search(int *array, size_t start, size_t end, int value)
{
	size_t a;

	if (array == NULL)
		return (-1);

	while (end >= start)
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

/**
 * exponential_search - searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Description: You have to use powers of 2 as exponential ranges to
 *              search in your array.
 * - Once you’ve found the good range, you need to use a binary search
 *
 * Return: first index where value is located. If value is not
 *         present in array or if array is NULL, return -1
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t a = 0, end;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (a = 1; a < size && array[a] <= value; a = a * 2)
			printf("Value checked array[%ld] = [%d]\n", a, array[a]);
	}

	end = a < size ? a : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", a / 2, end);
	return (_binary_search(array, a / 2, end, value));
}
