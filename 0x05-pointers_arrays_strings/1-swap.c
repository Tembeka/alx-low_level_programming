#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: The first integer to be swapped
 * @b: The second integer to be swapped
 *
 * Return: Nothing!
 */

/* This function swaps the values of two integers*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
