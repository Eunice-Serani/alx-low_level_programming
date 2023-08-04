#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets a bit of a given index to 1
 * @n: points to the number to differ
 * @index: the index of a bit to change to 1
 *
 * Return: 1 for success, -1 if it fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 45)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
