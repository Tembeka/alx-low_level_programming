#include "main.h"
#include <stdio.h>

/**
 * main - main function
 * @argc: number of arguments command-line passed
 * @argv: arrays of strings
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
