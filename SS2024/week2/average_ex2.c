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

    // Example #1
    /*
    while(grade >= 0) { 
        total = total + grade;        
        counter = counter + 1;
        printf("Enter grade: ");
        scanf("%d", &grade);
    }
    */

    while(grade != -1) {
        if(grade < 0) {
            printf("Negative input, grade should be 0-100\n");
        }
        else if (grade > 100) {
            printf("Grade above 100, grade should be 0-100\n");
        }
        else { // safe space (valid input)
            total = total + grade;        
            counter = counter + 1;
        }
        printf("Enter grade: ");
        scanf("%d", &grade);
    }

    // calculate average
    printf("Number of students: %d\n", counter);
    float average = (float)total/counter;
    if(counter == 0) {
        printf("There are no student grades\n");
    }
    else { // 90 91 91 --> AVG: 90.67
        printf("Average (f): %f\n", average);
        printf("Average (2f): %.2f\n", average);
        printf("Average (1f): %.1f\n", average);
        printf("Curved average: %.0f\n", (average));
    }
    

    return 0;
}