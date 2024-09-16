#include<stdio.h>

int main() {

    float x = 5;
    float y = 3;

    // char operator = ' ';
    int operator = 0;

    // while((operator = getchar()) != EOF) {
    printf("Select operation: (1) Addition (2) Subtraction (3) Multiplication (4) Division\n");
    scanf("%d", &operator);
    while(operator != -1) {
        switch(operator) {
            case 1:
                printf("You selected an Addition operation\n");
                printf("Addition Result: %f\n", (x+y));
                break;
            case 2:
                printf("You selected a Subtraction operation\n");
                printf("Subtraction Result: %f\n", (x-y));
                break;
            case 3:
                printf("You selected a Multiplication operation\n");
                printf("Multiplication Result: %f\n", (x*y));
                break;
            case 4:
                printf("You selected a Division operation\n");
                printf("Division Result: %f\n", (x/y));
                break;
            case '\n':
                // break;
            case '\t':
                // break;
            case ' ':
                // printf("Caught a whitespace\n");
                break;
            default:
                printf("Invalid input: %d\n", operator);
                printf("Valid inputs are: +, -, *, /\n");
                break;
        }
        scanf("%d", &operator);
    }

    printf("Ending program!\n");

    return 0;
}