#include<stdio.h>

int main() {

    int grade = 0;
    //int total = 0;
    float total = 0.0;
    int count = 0;
    float average = 0.0;

    int flag = 1;

    while(count < 2) {
        while(flag) {
            printf("Enter grade: ");
            scanf("%d", &grade);
            if(grade <= 100) {
                if(grade >= 0) {
                    flag = 0;
                }
                else {
                    printf("Invalid input!\n");
                }
            }
            else {
                    printf("Invalid input!\n");
            }
        }
        total = total + grade;
        count = count + 1;
        flag = 1;
    }
    printf("Count value: %d\n", count);
    // printf("total value: %d\n", total);
    printf("total value: %f\n", total);
    // average = total/2.0;
    average = total/count;
    printf("Average: %f\n", average);

    return 0;
}