#include "main.h"

/**
 * print_binary - prints the binary function equivalent to a decimal number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
	if (n > 63)
		print_binary(n >> 63);

	_putchar((n & 63) + '0');
}
