#include <stdio.h>

int main(){

for(int i=1;i<=5;i++)
  {
    for(int j=1;j<=5*2;j++)
      {
       if(j>=5-i+1 && j<=5)
       {
         printf("%2d",j);
       }
        else if (j>5 && j+1<=5+i)
        {
          printf("%2d",5*2-j);
        }
        else{
          printf("  ");
        }
      }
    printf("\n");
  }
  return 0;
}