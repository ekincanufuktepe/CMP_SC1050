#include<stdio.h>

int main() {

    int grade = 0;
    int counter = 0;
    int sum = 0;
    int max_num_of_students = 3;

    while(counter != max_num_of_students) {
        scanf("%d", &grade);
        if(grade >= 0) {
            if(grade <= 100) {
                sum = sum + grade;
                counter = counter + 1;
            }
            else {
                printf("your grade cannot be greater than 100!\n");
            }
        }
        else {
            printf("Your grade cannot be less than 0\n");
        }
    }

    float avg = 0;
    avg = ((float)sum)/max_num_of_students;

    printf("Average: %f\n", avg);

    return 0;
}