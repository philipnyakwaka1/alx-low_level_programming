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
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);
	arr = malloc(sizeof(int) * width * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
