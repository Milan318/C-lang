#include <stdio.h>
#include <string.h>

 int sl(char *str){
   int length = 0;

   while(*str != '\0'){
     length++;
     str++;

   }
   return length;
 }
  int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s",str);
    char *ptr=str;

    int length = sl(ptr);
    printf( "The length of the string is: %d\n", length);
    return 0;
  }