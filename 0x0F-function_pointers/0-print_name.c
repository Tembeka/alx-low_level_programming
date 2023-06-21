#include "function_pointers.h"
#include <stdio.h>

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

void print_string(char *igama)
{
	printf("%s\n", igama);
}
