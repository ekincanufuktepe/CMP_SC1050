#include<stdio.h>

int main() {

    // int num_of_students = 5;
    int counter = 0;
    int grade = 0;
    printf("Garbage value of grade: %d\n",grade);
    int total = 0;

    printf("Enter grade: ");
    scanf("%d", &grade);

    // sentinal control loop
    while(grade >= 0) { // while(grade != -1) {
        total = total + grade;        
        counter = counter + 1;
        printf("Enter grade: ");
        scanf("%d", &grade);
    }

    // calculate average
    printf("Number of students: %d\n", counter);
    float average = (float)total/counter;
    if(counter == 0) {
        printf("There are no student grades\n");
    }
    else {
        printf("Average: %f\n", average);
    }
    

    return 0;
}