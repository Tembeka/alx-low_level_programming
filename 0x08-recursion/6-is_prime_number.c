#include "main.h"

/**
 * helper - helper function to check if a number is prime recursively
 * @n: number to check
 * @divisor: current divisor to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */

int helper(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (divisor >= n)
	{
		return (1);
	}
	else if (n % divisor == 0)
	{
		return (0);
	}
	else
	{
		return (helper(n, divisor + 1));
	}
}

/**
 * is_prime_number - checks if a number is a prime number.
 * @n: number to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	return (helper(n, 2));
}
