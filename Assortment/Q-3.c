#include <stdio.h>
int main() 
{
  int size;
   printf("enter the array row & column size: ");
    scanf("%d", &size);

     int arr[size][size];

    printf("enter array elements:\n");
    for(int i=0;i<size;i++) 

    {
        for(int j=0;j<size;j++) 
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("The transpose matrix of an array:\n");
    for(int i=0;i<size;i++) 
    {
        for(int j=0;j<size;j++) 
        {
            printf("%d",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}