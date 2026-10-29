#include<stdio.h>

#define STUDENTS 3
#define EXAMS 4

int maxOfSelectedExam(int studentGrades[][EXAMS], int examNumber, int numOfStudents, int numOfExams);
double averageOfSelectedExam(int studentGrades[][EXAMS], 
                        int examNumber, 
                        int numOfStudents, 
                        int numOfExams);
int main() {

    int studentGrades[STUDENTS][EXAMS] = {
                                            {64, 97, 75, 93},
                                            {87, 52, 100, 12},
                                            {92, 94, 10, 70}};
    int examNum = 2;
    printf("Max of Exam %d: %d\n", examNum, maxOfSelectedExam(studentGrades, examNum, STUDENTS, EXAMS));
    printf("Avg. of Exam %d: %lf\n", examNum, averageOfSelectedExam(studentGrades, examNum, STUDENTS, EXAMS));
    return 0;
}

int maxOfSelectedExam(int studentGrades[][EXAMS], 
                        int examNumber, 
                        int numOfStudents, 
                        int numOfExams){
    printf("(max)Size: %zu\n", sizeof(studentGrades));
    int max = 0;
    for(int row = 0; row<numOfStudents; row++) {
        if(max < studentGrades[row][examNumber]) {
            max = studentGrades[row][examNumber];
        }
    }
    return max;
}


double averageOfSelectedExam(int studentGrades[][EXAMS], 
                        int examNumber, 
                        int numOfStudents, 
                        int numOfExams){
    double total = 0;
    for(int row = 0; row<numOfStudents; row++) {
        total += studentGrades[row][examNumber];
    }
    return total/numOfStudents;
}