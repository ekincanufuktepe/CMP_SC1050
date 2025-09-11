#include <stdio.h>
/*
    Find the 2 bugs in the main function
*/
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", num);

    // Check if the number is positive, negative, or zero
    if (num = 0) {
        printf("Number is zero.\n");
    } else {
        (num > 0) ? printf("Number is Positive.\n") : printf("Number is Negative.\n");
    }

    return 0;
}

