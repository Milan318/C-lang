#include <stdio.h>
int main (){

  int k=10; 
  
  for(int i=1;i<=5;i++)
    { 
      for(int j=1;j<=i;j++)
        {
          k=k+1;
          printf("%d ",k);
        }
    printf("\n");
    }
     return 0;      
    }