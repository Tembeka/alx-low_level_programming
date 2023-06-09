#include "main.h"
#include <stdio.h>

/**
 * main - main function
 * @argc: number of command-line arguments passed
 * @argv: arrays of string
 *
 * Return:0 on success.
 */

int main(int argc, __attribute__((unused)) char  *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
