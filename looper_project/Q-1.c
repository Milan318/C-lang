#include <stdio.h>

int main(){

  char alphabet = 'A';

  do {

    printf("%c, ",alphabet);
    alphabet=alphabet+4;
    
  }while(alphabet <= 'Z');

  return 0;  
}