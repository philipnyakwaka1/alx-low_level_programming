#include <stdio.h>
/**
* main - prints a[2] = 98, followed by a new line.
* 
* Return: Always 0
*/

int main(void)
{
  int x;
  int i[5];
  int *n;

  i[2] = 1024;
  n = &x;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
  *(n + 5) = 98;
  /* ...so that this prints 98\n */
  printf("i[2] = %d\n", i[2]);
  return (0);
}
