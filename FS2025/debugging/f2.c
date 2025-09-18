#include <stdio.h>

/*
    Find the bug (only one bug) in the main function,
    and fix the buggy line in the code.
    Then submit the corrected line through Canvas

    Please follow submission format example below:

    Line 5: if (num == 0) {
*/

int main() {
    int i = 0;
    int num = 0;
    float total = 0;
    // Calculate the average of the five entered inputs
    while (i++ != 5) {  // BUG #1: Change from preincrement to postincrement
        printf("Enter number: ");
        scanf("%d", &num);
        total += num;
    }
    printf("Average: %f\n", total/i);

    return 0;
}
