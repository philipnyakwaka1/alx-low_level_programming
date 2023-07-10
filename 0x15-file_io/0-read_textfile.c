#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file path
 * @letters: number of letters it should read and print
 * Return: letters if succesfull, else 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_return, write_return;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL || filename == NULL)
		return (0);

	read_return = -1;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	read_return = read(fd, buffer, letters);
	if (read_return == -1)
	{
		return (0);
	}

	write_return = write(STDOUT_FILENO, buffer, read_return);
	if (write_return == -1)
		return (0);
	free(buffer);
	close(fd);
	return (write_return);
}
