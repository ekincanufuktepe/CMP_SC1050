#include<stdio.h>

int main(void) {

    int grade;

    printf("Enter grade: ");
    scanf("%d", &grade);

    // Better design
    // if( grade >= 60) {
    //     printf("You PASSED!\n");
    // }
    // else {
    //     printf("Sorry you FAILED\n");
    // }

    // Bad design
    // if( grade >= 60 ) {
    //     printf("You PASSED!\n");
    // }
    // if( grade < 60 ) {
    //     printf("Sorry you FAILED\n");
    // }

    // Compact version, using conditional expression
    // alternative #1
    // grade >= 60 ? printf("Passed\n") : printf("Fail\n");

    // alternative #2
    printf("%s\n", grade >= 60 ? "Passed" : "Fail");

    printf("Your grade is: %d\n", grade);

    return 0;
}