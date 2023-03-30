#include <stdio.h>
/**
* main - prints a[2] = 98, followed by a new line.
* 
* Return: Always 0
*/

int main(void)
{
  int a[5];
  int *p;
  int n;

  a[2] = 1024;
  p = &n;
  printf("a[2] = %d\n", a[2]);
  return (0);
}

