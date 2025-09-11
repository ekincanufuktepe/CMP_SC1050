#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);   // BUG #1: Missing &

    // Check if the number is positive, negative, or zero
    if (num == 0) {      // BUG #2: Assignment instead of comparison
        printf("The number is zero.\n");
    } else {
        (num > 0) ? printf("The number is positive.\n") : printf("The number is negative.\n");
    }

    return 0;
}
