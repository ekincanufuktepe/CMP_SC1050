#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define ROWS 3
#define COLUMNS 4

void print_student_grades(int[][COLUMNS], char[][COLUMNS]);

int main() {
    srand(time(NULL));

    char student_name[ROWS][50];
    int student_grades[ROWS][COLUMNS] = {};

    for(int i=0; i<ROWS; i++) {
        scanf("%s", student_name[i]);
    }

    for(int i=0; i<ROWS; i++ ) {
        for(int j=0; j<COLUMNS; j++) {
            student_grades[i][j] = rand()%40 + 60;
        }
    }

    for(int i=0; i<ROWS; i++) { // access each student
        printf("%s: ", student_name[i]);
        for(int j=0; j<COLUMNS; j++) { // access grades
            printf("%d ", student_grades[i][j]);
        }
        printf("\n");
    }

    print_student_grades(student_grades, student_name);

    return 0;
}

void print_student_grades(int student_grades[][COLUMNS], char student_name[][COLUMNS]) {
    for(int i=0; i<ROWS; i++ ) { // access each student
        printf("%s: ", student_name[i]);
        for(int j=0; j<COLUMNS; j++) { // access grades
            printf("%d ", student_grades[i][j]);
        }
        printf("\n");
    }
}

//    for(int i=0; i<ROWS; i++ ) {
//         for(int j=0; j<COLUMNS; j++) {
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }