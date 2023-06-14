#include "main.h"
/**
 * print_diagsums - prints the sum of a the two diagonals of a square
 * matrix of integers
 * @a: input matrix
 * @size: size of rows/colums
 */
void print_diagsums(int *a, int size)
{
	int i, j, k, len, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	j += size;
	len = size * size;
	for (i = 0; i < len; i += j)
	{
		sum1 += **a + i;
	}
	for (k = len - 1; k >= 0; k -= j)
	{
		sum2 += **a + k;
	}
	printf("%d, %d", sum1, sum2);
}
