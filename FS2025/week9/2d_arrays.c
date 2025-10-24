#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define STUDENTS 3
#define TESTS 4

void setGradesRandomly(int grades[][TESTS]);
void printGrades(int grades[][TESTS]);

int main() {

    srand(time(NULL));  // set random seed, if this line is not added you will 
    int grade = 0;
    int studentGrades[STUDENTS][TESTS] = {0};
    printGrades(studentGrades);

    setGradesRandomly(studentGrades);  
    
    printGrades(studentGrades);

    printf("This is the main function\n");
    for(int i=0; i<STUDENTS; i++) {
        printf("Student #%d: ", i+1);
        for(int j=0; j<TESTS; j++) {
            printf("%d ", studentGrades[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void setGradesRandomly(int grades[][TESTS]) {
    for(int i=0; i<STUDENTS; i++) {
        for(int j=0; j<TESTS; j++) {
            grades[i][j] = rand() % 101;
        }
    }
}

void printGrades(int grades[][TESTS]) {
    for(int i=0; i<STUDENTS; i++) {
        printf("Student #%d: ", i+1);
        for(int j=0; j<TESTS; j++) {
            printf("%d ", grades[i][j]);
        }
        printf("\n");
    }
}

