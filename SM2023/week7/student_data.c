#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define NUM_OF_STUDENTS 3
#define NUM_OF_EXAMS 4
#define MAX_CHARS_NAME 50

void print_student_grades(int[][NUM_OF_EXAMS], char[][MAX_CHARS_NAME]);
float average_of_exams(int exam_grades[]);

int main() {
    srand(time(NULL));

    char student_name[NUM_OF_STUDENTS][MAX_CHARS_NAME];
    int student_grades[NUM_OF_STUDENTS][NUM_OF_EXAMS] = {};

    for(int i=0; i<NUM_OF_STUDENTS; i++) {
        scanf("%s", student_name[i]);
    }

    for(int i=0; i<NUM_OF_STUDENTS; i++ ) {
        for(int j=0; j<NUM_OF_EXAMS; j++) {
            student_grades[i][j] = rand()%40 + 60;
        }
    }

    // for(int i=0; i<ROWS; i++) { // access each student
    //     printf("%s: ", student_name[i]);
    //     for(int j=0; j<NUM_OF_EXAMS; j++) { // access grades
    //         printf("%d ", student_grades[i][j]);
    //     }
    //     printf("\n");
    // }

    print_student_grades(student_grades, student_name);

    return 0;
}


// The second dimension of the student name argument/parameter was inconsistent
void print_student_grades(int student_grades[][NUM_OF_EXAMS], char student_name[][MAX_CHARS_NAME]) {
    for(int i=0; i<NUM_OF_STUDENTS; i++ ) { // access each student
        printf("%s: ", student_name[i]);
        for(int j=0; j<NUM_OF_EXAMS; j++) { // access grades
            printf("%d ", student_grades[i][j]);
        }
        printf(", Avg: %f", average_of_exams(student_grades[i]));
        printf("\n");
    }
}

float average_of_exams(int exam_grades[]) {
    float sum = 0;
    for(int i=0; i<NUM_OF_EXAMS; i++) {
        sum = sum + exam_grades[i];
    }
    return sum/NUM_OF_EXAMS;
}