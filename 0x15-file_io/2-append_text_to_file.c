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
 * append_text_to_file - appends text at end of file
 * if file already exists, truncate it
 * @filename: file path
 * @text_content: string to write in the file
 * Return: 1 if succesful, else 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_return;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
