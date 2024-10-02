#include <stdio.h>

int main() {
    int row,column;
     printf("enter the array's row size: ");
    scanf("%d", &row);
  
    printf("enter the array's column size: ");
    scanf("%d", &column);
  
    int arr[row][column];
  
    printf("enter array's elements:\n");
    for (int i =0;i<row;i++)
    {
        for (int j=0;j<column;j++) 
       {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int largest = arr[0][0];
     for (int i=0;i<row;i++)
    {
        for (int j=0;j<column;j++) 
         {
            if (arr[i][j]>largest) 
             {
                largest=arr[i][j];
             }
        }
    }
    printf("The largest element is: %d\n", largest);

    return 0;
}