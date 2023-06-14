#include "main.h"
/**
 * _strlen_recursion - returns length of a string
 * @s: input string
 * Return: sting length
 */
int _strlen_recursion(char *s)
{
	int len;
	len = 0;

	if (*s == '\0')
	{
		return (len);
	}
	len++;
	len += _strlen_recursion(s + 1);
	return (len);
}	
