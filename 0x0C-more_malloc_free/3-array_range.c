#include "main.h"
#include <stdlib.h>
/**
 * _memset - numbers from min to max
 * @s: starting address:
 * @max: last number being filled
 * @min: first number to be filled
 * Return: a pointer to memory area s
 *
 */
int *_memset(int *s, int min, int max)
{
	int i;

	i = 0;
	while (min <= max)
	{
		s[i] = min;
		min++;
	}
	return (s);
}
/**
 * array_range - creates an array of integers
 * @max: last number being filled
 * @min: first number to be filled
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(unsigned int) * (max - min) - 1);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, min, max);
	return (ptr);
}

