#include<stdio.h>

int main() {

    char op;
    int aCount = 0;
    int bCount = 0;
    int cCount = 0;
    int dCount = 0;
    int fCount = 0;

    scanf("%c", &op);
    while(op != EOF) {
        switch(op) {
            case '+':
                printf("Addition\n");
                break;
            case '-':
                printf("Subrtraction\n");
                break;
            case '/':
                printf("Division\n");
                break;
            case '*':
                printf("Multiplication\n");
                break;
            default:
                printf("I don't recognize character: %c", op);
                break;
        }
        scanf(" %c", &op);
    }
    return 0;
}