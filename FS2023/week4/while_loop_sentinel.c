#include<stdio.h>

int main() {

    int grade = 0;
    int counter = 0;
    int sum = 0;
    
    // Solution #1
    // scanf("%d", &grade);
    // while(grade != -1) {
    //     sum = sum + grade;
    //     counter = counter + 1;
    //     scanf("%d", &grade);
    // }

    // Solution #2
    while(grade != -1) {
        scanf("%d", &grade);
        if(grade != -1) {
            sum = sum + grade;
            counter = counter + 1;
        }
    }

    float avg = 0;
    avg = sum/((float)counter);
    printf("Number of students: %d\n", counter);
    printf("Average: %1f\n", avg);

    return 0;
}