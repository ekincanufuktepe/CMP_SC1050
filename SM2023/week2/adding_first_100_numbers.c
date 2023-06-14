#include<stdio.h>

int main() {

    int sum = 0;
    int counter = 0;
    int limit;

    printf("Enter a positive integer: ");
    scanf("%d", &limit);

    // Check if user input is positive integer
    // Consider this as a trap!
    while(limit <= 0) {
        printf("I said you have to enter a positive integer!!!\n");
        printf("Enter a positive integer: ");
        scanf("%d", &limit);
    }

    while(counter <= limit) {
        sum = sum + counter;
        counter = counter + 1;
    }

    printf("Result: %d\n", sum);

    return 0;
}