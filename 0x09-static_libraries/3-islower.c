#include "main.h"
/**
* _islower - checks for lowercase
* @c: character
*
* Return: 1 is success 0 i failure
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
