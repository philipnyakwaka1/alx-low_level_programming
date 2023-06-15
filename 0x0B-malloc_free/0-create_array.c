#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of
 * characters and initializes it with a specific char
 * @size: size of array
 * @c: initialization character
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	i = 0;
	ptr = malloc(sizeof(char) * size);

	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			*(ptr + i) = c;
		}
		return (ptr);
	}
}
