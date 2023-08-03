#include "main.h"
/**
 * get_endianness - checks for a machine's endianness
 * Return: 0 if big endian, else 0 if small endian
 */
int get_endianness(void)
{
	char *str;
	size_t n;

	n = 1;
	str = (char *) &n;

	return (*str);
}
