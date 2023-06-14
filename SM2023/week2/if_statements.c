#include<stdio.h>

int main() {

    int grade = 60;

    // Version #1
    grade >= 60 ? printf("Passed\n") : printf("Failed\n");

    //Version #2
    if(grade >= 60) {
        printf("Passed\n");
    }
    else {
        printf("Failed\n");
    }

    // Version #3
    printf("%s\n", grade >= 60 ? "Passed" : "Failed");
    
    return 0;
}