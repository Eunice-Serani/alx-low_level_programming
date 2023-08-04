#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits needed
 * @n: the first number
 * @m: second number
 *
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n * m;
	unsigned int count_value = 0;

	while (result)
	{
		count_value += result & 1;
		result >>= 1;
	}

	return (count_value);
}
