#include "main.h"

/**
 * helper - checks the input number from n to the num
 * @a: number is squared and compared against num
 * @num: number to check
 * Return: natural square root of num
 */

int helper(int a, int num)
{
	if (a * a == num)
	{
		return (a);
	}
	if (a * a > num)
	{
		return (-1);
	}
	return (helper(a + 1, num));
}

/**
 * _sqrt_recursion - return the natural square root of a number.
 * @n: check for square roots.
 * Return: natural square root of number n
 */
int _sqrt_recursion(int n)
{
	return (helper(1, n));
}
