#include "search_algos.h"

/**
  * advanced_binary_recursive - recursively searches for a value in a sorted
  *                             array of integers using binary search.
  * @array: A pointer to the first element of the [sub]array to search.
  * @start: The starting index of the [sub]array to search.
  * @end: The ending index of the [sub]array to search.
  * @value: The value to search for.
  *
  * Return: index where the value is located. If the value is not present
  *         or the array is NULL, -1
  */
int advanced_binary_recursive(int *array, size_t start, size_t end, int value)
{
	size_t a;

	if (end < start)
		return (-1);

	printf("Searching in array: ");
	for (a = start; a < end; a++)
		printf("%d, ", array[a]);
	printf("%d\n", array[a]);

	a = start + (end - start) / 2;
	if (array[a] == value && (a == start || array[a - 1] != value))
		return (a);
	if (array[a] >= value)
		return (advanced_binary_recursive(array, start, a, value));
	return (advanced_binary_recursive(array, a + 1, end, value));
}

/**
  * advanced_binary - Searches for a value in a sorted array
  *                   of integers using advanced binary search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Description: Compares a value in the array to the value being
  *              searched, and prints it
  *
  * Return: index where the value is located. If the value is not present
  *         or the array is NULL, -1.
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
