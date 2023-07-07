#include "main.h"

/**
 * clear_bit - sets the value of a bit to 1 at a given index.
 * @n: unsigned long integer
 * @index: index int
 *
 * Return: 1 if it worked, -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~mask;
	return (1);
}
