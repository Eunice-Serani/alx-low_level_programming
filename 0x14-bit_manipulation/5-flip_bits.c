#include "main.h"

/**
 * flip_bits - returns the number of bits needed
 * @n: the first number
 * @m: second number
 *
 * Return: the number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int current_result = n ^ m;
	unsigned int count = 0;

	while (current_result)
	{
		count += current_result & 1;
		current_result >>= 1;
	}

	return (count);
}
