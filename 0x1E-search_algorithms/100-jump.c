#include "search_algos.h"
#include <math.h>

/**
 * min - Returns the minimum of 2 values
 * @a: First value
 * @b: Second value
 *
 * Return: The minimum of 2 values
*/
size_t min(size_t a, size_t b)
{
	return ((a < b) ? a : b);
}

/**
 * jump_search - This searches for a value in a sorted array of integers using
 * the Jump search algorithm.
 * @array: Pointing to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: First index where value is located, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t k, jump, step;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	step = sqrt(size);
	k = jump = 0;

	while (jump < size && array[jump] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		k = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", k, jump);
	jump = min(jump, size - 1);
	while (k < jump && array[k] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", k, array[k]);
		k++;
	}

	printf("Value checked array[%ld] = [%d]\n", k, array[k]);
	return (array[k] == value ? (int) k : -1);
}
