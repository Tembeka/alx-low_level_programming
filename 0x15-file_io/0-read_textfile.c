#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to be read.
 * @letters: num of chars to read and print from the file.
 *
 * Return: num  of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t total_read = 0;
	char *buffer = NULL;
	FILE *file;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	total_read = fread(buffer, sizeof(char), letters, file);
	if (total_read < 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	buffer[total_read] = '\0';

	printf("%s", buffer);

	free(buffer);
	fclose(file);

	return (total_read);
}
