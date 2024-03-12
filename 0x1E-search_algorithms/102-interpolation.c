#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: Pointing to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: First index where value is located, otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, position;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	low = 0;
	high = size - 1;
	while (low <= high)
	{
		position = low + (((double)(high - low) / (array[high] - array[low]))
		* (value - array[low]));

		if (position < size)
		{
			printf("Value checked array[%ld] = [%d]\n", position, array[position]);
		}
		else
		{
			printf("Value checked array[%ld] is out of range\n", position);
			break;
		}
		if (value < array[position])
		{
			high = position - 1;
		}
		else if (value > array[position])
		{
			low = position + 1;
		}
		else
		{
			return (position);
		}
	}
	return (-1);
}
