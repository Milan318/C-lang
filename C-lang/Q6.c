#include <stdio.h>
#include <string.h>

#define FRUITS 20

struct Fruit {
    char name[50];
    char color[20];
};

int main() {
    int n;
    printf("Enter the number of fruits: ");
    scanf("%d", &n);
    getchar(); 

    if (n <= 0 || n > FRUITS) {
        printf("Invalid input\n");
        return 1;
    }

    struct Fruit fruits[FRUITS];

    printf("Enter the name and color of each fruit:\n");
    for (int i = 0; i < n; i++) {
        printf("Fruit %d: ", i + 1);
        scanf("%s %s", fruits[i].name, fruits[i].color);
        getchar(); 
    }

    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fprintf(file, "%s %s\n", fruits[i].name, fruits[i].color);
    }

    fclose(file);
    printf(" data.txt success.\n");

    return 0;
}
