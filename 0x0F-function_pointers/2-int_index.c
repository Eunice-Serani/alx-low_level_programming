#include "function_pointers.h"

/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to function of one of the 3 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	}
	return (-1);
}
