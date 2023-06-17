#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @max: last number being filled
 * @min: first number to be filled
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(unsigned int) * (max - min) - 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (max - min) + 1; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}

