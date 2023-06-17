#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2D
 * array, whose elements are initialized by o
 * @width: array width
 * @height: array height
 * Return: a pointer to a 2 dimensional array of integers
 * return NULL on failure
 * If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			arr[height][width] = 0;
		}
	}
	return (arr);
}
