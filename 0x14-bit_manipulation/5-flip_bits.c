#include "main.h"

/**
 * flip_bits - bits you would need to flip to get from one num to another.
 * @n: unsigned ong integer
 * @m: unsigned long int
 *
 * Return:  the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result > 0)
	{
		if (xor_result & 1)
			count++;
		xor_result >>= 1;
	}
	return (count);
}
