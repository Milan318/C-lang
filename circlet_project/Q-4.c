#include <stdio.h>

int main(){

  
for(int i=5;i>=1;i--)
  {
    for(int j=1;j<=5-i;j++)
      {
        printf("  ");
      }
    for(int n=1;n<=i;n++)
      {
        printf("%d ",n%2);
      }
    printf("\n");
  }
  return 0;
}