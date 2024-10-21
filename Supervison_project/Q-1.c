#include <stdio.h>

int main(){

FILE*evenfile,*oddfile;

evenfile = fopen("even_file.txt","w");
if(evenfile == NULL)
{
    printf("unable to open the file \n ");
}

oddfile = fopen("odd_file.txt","w");
if(oddfile == NULL)
{
    printf("unable to open the file \n ");
}

for(int i=50 ; i<=70 ; i++)
{
    if(i%2==0)
    {
        fprintf(evenfile,"%d",i);
        if(i!=70) fprintf(evenfile,", ");
    }else
    {
        fprintf(oddfile,"%d",i);
        if(i!=69) fprintf(oddfile,", ");
    }
}

fclose(evenfile);
fclose(oddfile);

printf("file is sucessfully created");

    return 0;
}