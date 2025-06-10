#include<stdio.h>

int main() {

    int grade = 55;

    // Alternative #1
    if(grade >= 60) {
        printf("Passed\n");
    }
    else {
        printf("Failed\n");        
    }

    // Alternative #2
    if(grade >= 60) {
        printf("Passed\n");
    }

    if (grade < 60) {
        printf("Failed\n");        
    }

    return 0;
}