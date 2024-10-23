// write a c program that define a function to print a reverse 1D array element and print sum of all elements?

#include <stdio.h>

int main() {
    int num, reversed = 0;

    printf("Enter a any number: ");
    scanf("%d", &num);

    while(num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}