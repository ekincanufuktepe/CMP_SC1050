#include<stdio.h>

int main() {
    
    int grade;
    printf("Enter your grade: ");
    scanf("%d", &grade);

    if(grade > 59) {
        printf("Passed\n");
    } 
    else {
    // if(grade <= 59) {    // using this intead of else may give you the same result, but the way how it works is different.
        printf("Failed\n");
    }

    return 0;
}