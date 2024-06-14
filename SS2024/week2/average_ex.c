#include<stdio.h>

int main() {

    int num_of_students = 5;
    int counter = 1;
    int grade = 0;
    printf("Garbage value of grade: %d\n",grade);
    int total = 0;

    while(counter <= num_of_students) {
        printf("Enter grade: ");
        scanf("%d", &grade);
        total = total + grade;        
        counter = counter + 1;
    }

    // calculate average
    printf("Number of students: %d\n", num_of_students);
    float average = (float)total/num_of_students;
    printf("Average: %f\n", average);

    return 0;
}