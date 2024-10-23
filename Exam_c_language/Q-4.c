// Implement in c program to simulate a simple calculator that performs addition,subtraction,multipication,
// division based on user input?

#include<stdio.h>

int main(){
	
	int n1,n2,add,sub,mul,div;
	 printf("Enter the number-1: ");
	 scanf("%d",&n1);
	 printf("Enter theNumber-2: ");
	 scanf("%d",&n2);
	
	 add = n1 + n2;
	 sub = n1 - n2;
	 mul = n1 * n2;
	 div = n1 / n2;
	
	 printf("Addition of %d and %d is :%d\n",n1,n2,add);
	 printf("Subtraction of %d and %d is :%d\n",n1,n2,sub);
	 printf("Multiplication of %d and %d is:%d\n",n1,n2,mul);
	 printf("Division of %d and %d is :%d\n",n1,n2,div);
	 


}