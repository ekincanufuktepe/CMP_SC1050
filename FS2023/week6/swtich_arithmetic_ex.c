#include<stdio.h>

int main() {

    //int control;
    char control;
    int x = 0;
    int y = 0;

    printf("Enter + for addition, - for subtraction\n");
    scanf("%c", &control);

    printf("Enter first input: ");
    scanf("%d", &x);

    printf("Enter second input: ");
    scanf("%d", &y);

    int result = 0;

    switch(control) {
        // addition
        case '+':
            result = x + y;
            printf("(+) Result: %d\n", result);
            break;
        // subtraction
        case '-':
            result = x - y;
            printf("(-) Result: %d\n", result);
            break;  
        default:
            printf("Invalid input\n");
            break;
    }

    printf("Result: %d\n", result);

    return 0;
}