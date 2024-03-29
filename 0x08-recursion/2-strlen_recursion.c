#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: string.
 *
 * Return: The length of the string. If the string is empty, it returns 0.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
