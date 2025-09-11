#include<stdio.h>

int main() {

    int counter = 0;
    int grade = 0;
    int total = 0;

    while(counter < 2) {
        printf("Repeat #%d\n", counter);
        printf("Enter grade: ");
        scanf("%d", &grade);
        total = total + grade;
        counter = counter + 1;
    }

    // printf("Average grade: %f\n", ((float)total)/2);
    printf("Average grade: %f\n", total/2.0);

    return 0;
}