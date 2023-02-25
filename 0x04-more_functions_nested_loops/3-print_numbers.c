#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9.
 *
 * Return: output.
 */

void print_numbers(void)
{
	int n;
	int i = 0;

	for (n = 0; n <= 9; n++)
	_putchar((n % 10) + '0');

	_putchar('\n');
	while (i < 10)
	{
	_putchar(i + '0');
	i++;
	}
	_putchar('\n');
}
