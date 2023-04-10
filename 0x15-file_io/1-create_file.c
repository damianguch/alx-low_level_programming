#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: The name of the file to create.
 * @text_content: A string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, num_bytes;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	num_bytes = sizeof text_content;

	bytes_written = write(fd, text_content, num_bytes);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	if (fd == -1 || bytes_written == -1 || bytes_written != num_bytes)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
