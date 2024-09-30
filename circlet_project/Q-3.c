#include <stdio.h>
int main (){ 
  
  for(int i=5;i>=1;i--)
    { 
      for( int n=1;n<=i-1;n++)
        {
          printf("  ");
        }
      for(int j=i;j<=5;j++)
        {
          printf("%d ",j);  
        }
    printf("\n");
    }
     return 0;      
}