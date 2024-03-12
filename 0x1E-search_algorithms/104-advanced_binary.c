#include "search_algos.h"

/**
  * binary_search_recursive - This searches recursively for a value in a sorted
  *                             array of integers using binary search
  * @array: A pointing to the first element of the [sub]array to search
  * @low: The starting index of the [sub]array to search
  * @high: The ending index of the [sub]array to search
  * @value: The value to search for
  *
  * Return: The index where value is located, otherwise -1
  */
int binary_search_recursive(int *array, size_t low, size_t high, int value)
{
	size_t b;

	if (high < low)
		return (-1);

	printf("Searching in array: ");
	for (b = low; b < high; b++)
		printf("%d, ", array[b]);
	printf("%d\n", array[b]);

	b = low + (high - low) / 2;
	if (array[b] == value && (b == low || array[b - 1] != value))
		return (b);
	if (array[b] >= value)
		return (binary_search_recursive(array, low, b, value));
	return (binary_search_recursive(array, b + 1, high, value));
}

/**
 * advanced_binary - This searches for a value in a sorted array of integers.
 * @array: Pointing to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The index where value is located, otherwise -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
	{
		return (-1);
	}

	return (binary_search_recursive(array, 0, size - 1, value));
}
