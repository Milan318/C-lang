#include <stdio.h>
int main() 
{
    int row, column;
    printf("enter the array row size:");
    scanf("%d", &row);
    printf("enter the array column size:");
    scanf("%d", &column);
    int arr[row][column];
    printf("enter array elements:\n");

    for ( int i=0;i<row;i++)
     {
        for ( int j=0;j<column;j++)
         {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    int rownum, columnnum;
     printf("enter row number:");
    scanf("%d", &rownum);
     printf("elements of row %d:",rownum);

    for (int j=0;j<column;j++) 
    {
        printf("%d",arr[rownum][j]);
    }
    printf("\n");
    int rowsum=0;

    for (int j=0;j<column;j++)
     {
        rowsum+=arr[rownum][j];
    }
    printf("The sum of row %d: %d\n", rownum, rowsum);
     printf("\nenter column number:");
    scanf("%d", &columnnum);
    printf("Elements of column %d:", columnnum);
    
    for (int i=0;i<row;i++)
    {
        printf("%d ",arr[i][columnnum]);
    }
    printf("\n");
    int columnsum =0;
    for (int i=0;i<row;i++) 
    {
        columnsum+=arr[i][columnnum];
    }
    printf("the sum of column %d: %d\n", columnnum,columnsum);
    return 0;
}