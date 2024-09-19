#include <stdio.h>

int  main(){

  int i;
  int j;
  int k;
  int result;
  

  printf("enter the any number :");
  scanf("%d",&i);

k = i%10;
 
  while(i>=10)
    {
      i=i/10;
    }

  j=i;
  
  result = j+k;
  printf("result is : %d",result);


  return 0;
}