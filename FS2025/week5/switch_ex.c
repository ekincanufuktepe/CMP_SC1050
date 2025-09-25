#include<stdio.h>

int main() {

    int selection = 0;
    int data = 20;

    printf("Enter your selection: ");
    scanf("%d", &selection);

    switch(selection) {
        case 1:
            printf("Option 1 is selected\n");
            data = data * 5;
        case 2:
            printf("Option 2 is selected\n");
            data = data - 2;
        case 3:
            printf("Option 3 is selected\n");
            data = data + 3;
            break;
        default:
            printf("Invalid option submitted");
            data = 0;
    }

    printf("The new data is: %d\n", data);

    return 0;
}