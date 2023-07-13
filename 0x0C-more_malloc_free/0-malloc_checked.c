#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b: nummber of bytes
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsighned int b)
{
	void *memory;

	memory = malloc(b);

	if (memory == NULL)
		exit(98);

	return (memory);

}
