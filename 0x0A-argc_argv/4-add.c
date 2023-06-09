#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - main function
 * @argc: number of argument command-line passed
 * @argv: array of strings
 *
 * Return: o if no numbers passed, 1 if not digit followed by Error message.
 */

int main(int argc, char *argv[])
{
	int num, i, j, sum;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		num = atoi(argv[i]);

		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
