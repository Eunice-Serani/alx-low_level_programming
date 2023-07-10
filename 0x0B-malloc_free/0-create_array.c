#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, Null if fail
 *
 */
char *create_array(unsigned int size, char c)
{

	char *array;
	unsigned int i;

	char *array = malloc(sizeof(char) * size);

	if (size == 0 || array == Null)
		return (Null);

	for (unsigned int i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
