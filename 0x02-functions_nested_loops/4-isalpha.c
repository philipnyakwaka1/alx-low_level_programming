#include "main.h"
/**
 * _isalpha - checks for alphabetical characters
 * @c: The character to be checked
 *
 * Return: 1 is letter, 0 is otherwise
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

