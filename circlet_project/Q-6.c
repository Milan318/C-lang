#include <stdio.h>

int main(){

  for(int i=1;i<=5;i++)
    {
      for(int j=1;j<=5*2;j++)
        {
          if(j<=i)
          {
            printf("%2d",j);
          }else if(j>5*2-i)
          {
            printf("%2d",5*2-j+1);
          }
          else{
            printf("  ");
          }
        }
      printf("\n");
    }
  return 0;
}