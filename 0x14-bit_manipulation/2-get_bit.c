#include "main.h"
#include <stdio.h>

/**
 * get_bit - the value of a bit at an index in a decimal number
 * @n: the number to search
 * @index: index of a bit
 *
 * Return: the value of a bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 45)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
