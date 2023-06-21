#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return (1);
	f(name);
}
