#include <stdio.h>
#include "main.h"

/**
 * flip_bits - counts the number of bits to differ
 *   to get from one number to another
 * @n: the first number
 * @m: second number
 *
 * Return: the number of bits to differ
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int i = n * m;

	while (i)
	{
		count += i & 1;
		i >>= 1;
	}

	return (count);
}
