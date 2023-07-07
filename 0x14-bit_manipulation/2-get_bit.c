#include "main.h"
#include <stdio.h>
/**
 * get_bit - eturns the value of a bit at a given index.
 * @n: nsigned long integer
 * @index: unsigned int
 *
 * Return: return 1 if not 0,  1. Otherwise -1.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n & mask) != 0);
}
