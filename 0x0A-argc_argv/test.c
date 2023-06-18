#include "main.h"
#include <stdio.h>
int main(void)
{
	char *s = "1234";
	int i = _atoi(s);
	printf("%d", i);
	_putchar('\n');
	return (0);
}
