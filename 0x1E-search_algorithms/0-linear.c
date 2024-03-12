#include "search_algos.h"

/**
 * linear_search - This searches for a value in an array of integers using
 * the Linear search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located, otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	int b;

	for (b = 0; b < (int) size; b++)
	{
		printf("Value checked array[%d] = [%d]\n", b, array[b]);
		if (value == array[b])
		{
			return (b);
		}
	}
	return (-1);
}
