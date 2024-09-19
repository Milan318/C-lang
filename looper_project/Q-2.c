#include <stdio.h>

int  main(){

  int i,j=0;  

  printf("enter the any number :");
  scanf("%d",&i);

  while(i!=0)
    {
      i=i/10;
      j++;
    }
  printf("the result is %d",j);

  return 0;
}