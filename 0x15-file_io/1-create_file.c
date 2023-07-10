#include "main.h"
/**
 * _strlen - finds string length
 * @s: input string
 * Return: length of string
 */
int _strlen(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
/**
 * create_file - creates a file and writes a string into it
 * if file already exists, truncate it
 * @filename: file path
 * @text_content: string to write in the file
 * Return: 1 if succesful, else 0
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_return;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		write_return = write(fd, text_content, _strlen(text_content));
		if (write_return == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
