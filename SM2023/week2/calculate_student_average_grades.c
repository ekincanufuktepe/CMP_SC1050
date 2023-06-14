#include<stdio.h>

int main() {

    int grade;
    int counter = 0;
    int total;

    float average;

    total = 0;
    while(grade != -1) {
        printf("Enter grade, enter -1 to stop\n");
        scanf("%d", &grade);
        if(grade != -1) {
            //total = total + grade;
            total += grade;
            //counter = counter + 1;
            counter += 1;
        }
    }

    if(counter == 0) {
        printf("You have no students\n");
    }
    else {
        average = (float)total/counter;
        printf("Number of students: %d\n", counter);
        printf("Average of grades: %f\n", average);
    }

    return 0;
}