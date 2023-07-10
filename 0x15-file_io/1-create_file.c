#include "main.h"
#include <stddef.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - function that creates a file.
 * @filename: file to create
 * @text_content: file being created
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[bytes_written] != '\0')
			bytes_written++;
		if (write(fd, text_content, bytes_written) == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
