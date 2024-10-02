#include <stdio.h>
int main() 
{
    int j;
    
    printf("enter the array's size: ");

    scanf("%d",&j);

    int arr[j];

    printf("enter array's elements:\n");

    for(int i=0;i<j;i++){
        printf("a[%d]=", i);
        scanf("%d",&arr[i]);
    }
    printf("negative elements from array:\n");
    
    for(int i=0;i<j;i++) 
    {
        if (arr[i]<0)
        {
            printf("%d",arr[i]);
        }
    }
     return 0;
}  