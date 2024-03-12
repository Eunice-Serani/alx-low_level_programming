#include "search_algos.h"

/**
 * print_array - This searches for a value in an array of integers using
 * the Linear search algorithm
 * @array: Pointing to the first element of the array to print
 * @start: First index to start printing from
 * @end: Last index to print
 */
void print_array(int *array, int start, int end)
{
	printf("Searching in array: ");
	for (; start <= end; start++)
	{
		printf("%d", array[start]);
		if (start == end)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
}

/**
 * binary_search - Searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: Pointing to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: Index where value is located, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	int middle;
	int left = 0;
	int right = (int) size - 1;

	while (left <= right)
	{
		middle = (left + right) / 2;

		print_array(array, left, right);
		if (value < array[middle])
		{
			right = middle - 1;
		}
		else if (value > array[middle])
		{
			left = middle + 1;
		}
		else
		{
			return (middle);
		}
	}
	return (-1);
}
