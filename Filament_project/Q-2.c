#include <stdio.h>
#include <string.h>
int main(){

char string[100];
int a,b,length;

printf("enter the string :");
scanf("%s",string);
for(a=0; string[a]!='\0'; a++)
{
    length=1;
    for(b=a+1; string[b]!='\0'; b++)
    {
        if(string[a]==string[b])
        {
            length++;
            string[b]='.';
        }
    }
    if(string[a]!='.')
    printf("\n %c : %d",string[a],length);
}
return 0;
}