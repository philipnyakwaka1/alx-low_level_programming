#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array
 * @array - input array
 * @size: array size
 * @action: pointer to a function being called
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

