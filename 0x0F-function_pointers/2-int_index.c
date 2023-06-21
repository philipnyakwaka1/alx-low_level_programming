#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - searches for an integer
 * @array: input array
 * @size: array size
 * @cmp: input function pointer
 * Return: index of element that matches cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (cmp == 0 || array == NULL)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
