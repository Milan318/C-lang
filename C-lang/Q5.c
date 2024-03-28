#include <stdio.h>

#define LAPTOPS 5

struct Laptop {
    char companyname[50];
    char processor[50];
    float price;
};

int main() {
    struct Laptop laptops[LAPTOPS];
    int num_laptops;

    printf("Enter the number of laptops: ");
    scanf("%d", &num_laptops);

    for (int i = 0; i < num_laptops; i++) {
        printf("\nEnter details for Laptop %d:\n", i + 1);
        printf("Company Name: ");
        scanf("%s", laptops[i].companyname);
        printf("Processor: ");
        scanf("%s", laptops[i].processor);
        printf("Price: ");
        scanf("%f", &laptops[i].price);
    }

    printf("\nDetails of %d laptops:\n", num_laptops);
    printf("------------------------------------------------\n");
    printf("Laptop No.\tCompany Name\tProcessor\tPrice\n");
    printf("------------------------------------------------\n");
    for (int i = 0; i < num_laptops; i++) {
        printf("%d\t\t%s\t\t%s\t\t$%.2f\n", i + 1, laptops[i].companyname, laptops[i].processor, laptops[i].price);
    }
    printf("------------------------------------------------\n");

    return 0;
}
