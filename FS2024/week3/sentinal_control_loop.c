#include<stdio.h>

/* Enter students grades, and stop entering 
    student grades, when user enters 0 for the flag.
    Then calculate the student grade average.
*/

int main() {

    int grade = 0;
    int flag = 1;   // the dummy/signal/flag variable
    // float total = 0;
    double total = 0;
    int headcount = 0;

    // Sentinel controlled loop example using while statement.
    while(flag == 1) {
        printf("Enter grade: ");
        scanf("%d", &grade);
        total = total + grade;
        headcount = headcount + 1;
        printf("Enter (0) to terminate, (1) to continue: ");
        scanf("%d", &flag);
    }

    printf("You have %d of students\n", headcount);
    // printf("Average is: %f\n", (total/headcount));
    printf("Average is: %lf\n", (total/headcount));

    return 0;
}