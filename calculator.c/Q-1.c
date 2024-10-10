#include <stdio.h>

float addition(float x , float y){
   float add = x + y;
    return add;
}
float subtraction(float x , float y){
   float sub = x - y;
    return sub;
}
float multiplication(float x , float y){
    float mul = x * y;
    return mul;
}
float division(float x , float y){
    float div = x / y;
    return div;
}
float modulo(float x , float y){
    float mod = (int)x % (int)y;
    return mod;
}

int main(){

     int choice;
  float x,y;
  do
    {
      printf("\nPress1 for addition.");
      printf("\nPress2 for subraction.");
      printf("\nPress3 for multiplication.");
      printf("\nPress4 for division.");
      printf("\nPress5 for modulo.");
      printf("\nPress0 for exit.");
      printf("\n\nEnter your choice:");
      scanf("%d",&choice);

      switch(choice)
        {
          case 0:
          printf("\nThank you for using my calculator.");
          break;

          case 1:
          printf("Enter the value of x:");
          scanf("%f",&x);
          printf("Enter the value of y:");
          scanf("%f",&y);
          printf("The sum of %f and %f is %f.\n",x,y,addition(x,y));
          break;

          case 2:
          printf("Enter the value of x:");
          scanf("%f",&x);
          printf("Enter the value of y:");
          scanf("%f",&y);
          printf("The sum of %f and %f is %f.\n",x,y,subtraction(x,y));
           break;

          case 3:
          printf("Enter the value of x:");
          scanf("%f",&x);
          printf("Enter the value of y:");
          scanf("%f",&y);
          printf("The sum of %f and %f is %f.\n",x,y,multiplication(x,y));
           break;

          case 4:
          printf("Enter the value of x:");
          scanf("%f",&x);
          printf("Enter the value of y:");
          scanf("%f",&y);
          printf("The sum of %f and %f is %f.\n",x,y,division(x,y));
           break;

          case 5:
          printf("Enter the value of x:");
          scanf("%f",&x);
          printf("Enter the value of y:");
          scanf("%f",&y);
          printf("The sum of %f and %f is %f.\n",x,y,modulo(x,y));
           break;

          default:
          printf("\nInvalid choice.");
           break;
        }
    }
    while (choice !=0);
  return 0;
}

