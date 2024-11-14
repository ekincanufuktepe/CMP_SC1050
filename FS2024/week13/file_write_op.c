#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

typedef struct student {
    char name[50];
    int grades[3];
} Student;

void printStudentList(Student list[], int size);

int main() {

    srand(time(NULL));
    Student stdList[3];
    strncpy(stdList[0].name, "Ekincan", 50);
    strncpy(stdList[1].name, "John", 50);
    strncpy(stdList[2].name, "Jane", 50);

    for(int i=0; i<3; i++) {
        stdList[i].grades[0] = rand()%101;
        stdList[i].grades[1] = rand()%101;
        stdList[i].grades[2] = rand()%101;
    }

    printStudentList(stdList, 3);

    FILE* fPtr = NULL;
    if((fPtr = fopen("student_grades.txt", "r+")) == NULL) {
        fprintf(stderr, "Couldn't open file!\n");
        return -1;
    }

    for(int i=0; i<3; i++) {
        fprintf(fPtr, "%s %d %d %d\n", stdList[i].name, stdList[i].grades[0], stdList[i].grades[1], stdList[i].grades[2]);
        // fputs(stdList[i].name, fPtr);
        // fputs(" ", fPtr);
        // fputs(strtod(stdList[i].grades[0]), fPtr);
        // fputs("\n", fPtr);
    }

    Student newStdList[3];
    int i = 0;
    rewind(fPtr);
    while(!feof(fPtr)) {
        fscanf(fPtr, "%s%d%d%d", newStdList[i++].name, &newStdList[i].grades[0], &newStdList[i].grades[1], &newStdList[i].grades[2]);
        // fgets(newStdList[i++].name, 50, fPtr);
    }

    printStudentList(newStdList, 3);

    fclose(fPtr);
    
    return 0;
}

void printStudentList(Student list[], int size) {
    for(int i=0; i<size; i++) {
        // printf("Student info: %s %d %d %d\n", list[i].name, list[i].grades[0], list[i].grades[1], list[i].grades[2]);
        printf("Student info: %s\n", list[i].name);
    }
}