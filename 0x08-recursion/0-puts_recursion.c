#include "main.h"

/**
 * _puts_recursion - function declaration
 * @s:string
 */

void _puts_recursion(char *s);

/**
 * _puts_recursion - function definition
 * @s: string to recurse
 * Description: recurses through a string s
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
	{
		_putchar('\n');
	}
}
