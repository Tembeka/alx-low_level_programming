#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to be computed
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int sqrt;

	if (n < 0)
	return (-1);

	sqrt = _isqrt(n, 1);

	if (sqrt * sqrt == n)
	return (sqrt);
	else
	return (-1);
}
