#include <stdio.h>

struct students{

    int roll_no;
    char name[50];
    int chemistry;
    int maths;
    int physics;
};

float percentage(int total_marks)
{
    return (float)total_marks/300*100;
}

int main(){
int i;
struct students students[5];



for(i=0;i<5;i++)
{
    printf("enter the details of student (%d) \n\n",i+1);
    printf("Roll_no : ");
    scanf("%d",&students[i].roll_no);

    printf("Name : ");
    scanf("%s",&students[i].name);

    printf("Chemistry : ");
    scanf("%d",&students[i].chemistry);

    printf("Maths : ");
    scanf("%d",&students[i].maths);

    printf("Physics : ");
    scanf("%d",&students[i].physics);

}

    printf("\nOutput\n\n");

    for(i=0;i<5;i++)
    {
        printf("%s (%d) \n",students[i].name, students[i].roll_no);

        printf("Chemitry : %d\n",students[i].chemistry);

        printf("Maths : %d\n",students[i].maths);

        printf("Physics : %d\n",students[i].physics);

        int total_marks = students[i].chemistry + students[i].maths + students[i].physics;

        printf("Total = %d/300\n",total_marks);

        printf("Percent = %2f%%\n\n",percentage(total_marks));

    }

    return 0;
}