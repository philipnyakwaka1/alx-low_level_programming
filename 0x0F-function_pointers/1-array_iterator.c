nclude "function_pointers.h"
#include <stdlib.h>
/**
 *  * array_iterator - executes a function
 *   * given as a parameter on each element of an array.
 *    * @array: input array
 *     * @size: size of the array
 *      * @action: function to be executed
 *       */
void array_iterator(int *array, unsigned int size, void (*action)(int))
{
		unsigned int i;

			if (array == NULL || action == NULL)
						return;
				for (i = 0; i < size; i++)
						{
									action(array[i]);
										}
}
