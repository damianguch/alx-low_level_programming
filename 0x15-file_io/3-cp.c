#include "main.h"

/**
 * error_msg - prints error messages and exits with exit value
 * @err: exit value or file descriptor
 * @s: str is a name, either of the two filenames
 * @fd: file descriptor
 *
 * Return: 0 on success
 **/

int error_msg(int err, char *s, int fd)
{
	switch (err)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(err);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
		exit(err);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
		exit(err);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(err);
	default:
		return (0);
	}
}

/**
 * main - copies the content of a file to another file.
 * @argc: argument count
 * @argv: an array of arguments on the cli
 * Return: 0 onsuccess, 97-100 for exit value errors.
 */
int main(int argc, char *argv[])
{
	int bytes_read, bytes_written, fd1, fd2;
	char *buffer[1024];

	if (argc != 3)
		error_msg(97, NULL, 0);

	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd2 == -1)
		error_msg(99, argv[2], 0);

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		error_msg(98, argv[1], 0);

	/*reads file while content > 0, copy/write content into new file */
	while ((bytes_read = read(fd1, buffer, 1024)) != 0)
	{
		if (bytes_read == -1)
			error_msg(98, argv[1], 0);

		bytes_written = write(fd2, buffer, bytes_read);
		if (bytes_written == -1)
			error_msg(99, argv[2], 0);
	}

	close(fd2) == -1 ? (error_msg(100, NULL, fd2)) : close(fd2);
	close(fd1) == -1 ? (error_msg(100, NULL, fd1)) : close(fd1);

	return (0);
}
