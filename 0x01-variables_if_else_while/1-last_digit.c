#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  prints the last digit of the number stored in the variable n
 *
 * Return: returns 0.
 */

int main(void)
{
	int n, l_n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_n = n % 10;
	if (n == 0)
		printf("The Last digit of %d is %d and is 0\n", n, l_n);
	else if (n > 5)
		printf("The Last digit of %d is %d and and is greater than 5\n", n, l_n);
	else if (n != 0 && n < 6)
		printf("The Last digit of %d is %d and is less than 6 and not 0\n", n, l_n);
	return (0);
}
