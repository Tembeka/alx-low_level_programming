#include "function_pointers.h"

/**
 *print_name - Write a function that prints a name.
 *@name: character to be printed
 *@f: pointer to the string
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
