#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets value of a given bit to 0
 * @n: points to the number to differ
 * @index: index of a bit to clear
 *
 * Return: 1 success, -1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 45)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
