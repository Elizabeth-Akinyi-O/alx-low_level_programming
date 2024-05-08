#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array
 *          of integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Description: uses the square root of the size of the array as the jump step
 *  - Compares a value in the array to the value being searched, and prints it
 * Return: first index where value is located. If value is not
 *         present in array or if array is NULL, return -1
*/
int jump_search(int *array, size_t size, int value)
{
	size_t a, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (a = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		a = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", a, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; a < jump && array[a] < value; a++)
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
	printf("Value checked array[%ld] = [%d]\n", a, array[a]);

	return (array[a] == value ? (int)a : -1);
}
