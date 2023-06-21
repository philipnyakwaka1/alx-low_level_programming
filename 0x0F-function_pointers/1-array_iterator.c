#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes a function
 * given as a parameter on each element of an array.
 * @array: input array
 * @size: size of the array
 * @action: function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
