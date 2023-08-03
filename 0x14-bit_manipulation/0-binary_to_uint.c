#include "main.h"
/**
 * binary_to_uint - conversts binary to unsigned int
 * @b: input string
 * Return: decimal equivalent or 0 if failed
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, val;
	int i, x;

	x = 0;
	sum = 0;
	val = 1;
	if (b == NULL)
		return (0);
	for (x = 0; b[x]; x++)
	{
		if (!(b[x] >= '0' && b[x] <= '1'))
			return (0);
	}
	for (i = x - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			sum += val;
		}
		val *= 2;
	}
	return (sum);
}
