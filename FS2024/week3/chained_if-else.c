#include<stdio.h>

int main() {
    
    int grade;
    printf("Enter your grade: ");
    scanf("%d", &grade);

    // selection statements and loop statements without braces will only accept 1-line of code
    // it is always safe to use braces, 

    if(grade >= 90)
        printf("Grade A\n");
        // printf("Good job!\n");   // not a part of if-statement, and will results it compile-error.
    else 
        printf("Failed\n");
        // printf("You need to retake this class\n"); // not a part of else block

    return 0;
}