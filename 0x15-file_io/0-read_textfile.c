#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output.
 * @filename: source file
 * @letters: number of letters to read and printed
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read, bytes_written, fd;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY)

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	bytes_read = read(fd, buffer, letters);

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (fd == -1 || bytes_read == -1 || bytes_wrtten == -1 || bytes_written
			!= bytes_read)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);

	return (bytes_read);

}
