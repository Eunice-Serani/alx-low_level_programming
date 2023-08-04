#include "main.h"

/**
 * get_endianness - this checks the endianness of the system
 *
 * Return: 0 if larger endian, 1 if smaller endian
 */
int get_endianness(void)
{
	unsigned int numb = 1;
	char *endianCheck = (char *)&numb;

	/* if the first byte of numb is 1, the system is smaller endian */
	return (*endianCheck);
}
