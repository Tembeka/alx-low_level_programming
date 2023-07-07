#include "main.h"
#include <stdio.h>

/**
 * print_binary - rints the binary representation of a number.
 * @n: unsigned long integer
 *
 * Return: no return
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	putchar((n & 1) + '0');
}
