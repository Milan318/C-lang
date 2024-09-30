#include <stdio.h>
int main()
{
  int n = 5;
  for (int i = 0; i < n; i++)
  {
    printf("* ");
  }
  printf("\n");
  printf("*");
  for (int k = 0; k < 2 * n - 3; k++)
  {
    printf(" ");
  }
  printf("*\n");
  for (int i = 0; i < n; i++)
  {
    printf("* ");
  }
  printf("\n");
  printf("*\n*\n");

  return 0;
}