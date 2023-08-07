#include "main.h"
/**
 * main - copies a file
 * @argc: number of arguments
 * @argv: argument vectors
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *buffer;
	int file1, file2, length, read_return, write_return;

	if (argc != 3)
	{
		dprintf(2, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	if (argv[1] == NULL)
	{
		dprintf(2,"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
	{
		dprintf(2,"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	length = lseek(file1, 0, SEEK_END);
	buffer = malloc(sizeof(char) * length);
	if (buffer == NULL)
	{
		return (-1);
	}
	lseek(file1, 0, SEEK_SET);
	read_return = -1;
	while (read_return != 0)
	{
		read_return = read(file1, buffer, 1024);
		if (read_return == -1)
		{
			dprintf(2,"Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
	}
	close(file1);
	if (close(file1) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", close(file1));
		exit(100);
	}
	if (argv[2] == NULL)
	{
		dprintf(2,"Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	file2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (file2 == -1)
	{
		dprintf(2,"Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	write_return = write (file2, buffer, read_return);
	if (write_return == -1)
	{
		dprintf(2,"Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	close(file2);
	if (close(file2) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", close(file2));
		exit(100);
	}
	return (0);
}		
