#include<stdio.h>

typedef struct student {
    char name[20];
    char lastname[20];
    int age;
    double gpa;
} Student;

void printStudent(Student s) {
    printf("(func)Student name: %s\n", s.name);
    printf("(func)Student lastname: %s\n", s.lastname);
    printf("(func)Student age: %d\n", s.age);
    printf("(func)Student gpa: %lf\n", s.gpa);
}

typedef int INTEGER;
typedef struct student MyStudent;

int main() {
    INTEGER x = 5;
    printf("x: %d\n", x);
    struct student ekin = {"ekin", "ufuktepe", 12, 4.0};
    printf("Student name: %s\n", ekin.name);
    printf("Student lastname: %s\n", ekin.lastname);
    printf("Student age: %d\n", ekin.age);
    printf("Student gpa: %lf\n", ekin.gpa);

    Student evil_clone_of_ekin = {"ekin", "ufuktepe", 12, 4.0};

    if(ekin.gpa == evil_clone_of_ekin.gpa)
        printf("same\n");

    MyStudent* ptrStudent = NULL;

    ptrStudent = &ekin;
    printf("(with pointer)Student name: %s\n", ptrStudent->name);
    printf("(with pointer)Student lastname: %s\n", (*ptrStudent).lastname);
    printf("(with pointer)Student age: %d\n", ptrStudent->age);
    printf("(with pointer)Student gpa: %lf\n", ptrStudent->gpa);

    printf("Student name: %s\n", (&ekin)->name);
    printf("Student lastname: %s\n", (*(&ekin)).lastname);
    printf("Student age: %d\n", (&(*(&ekin)))->age);
    printf("Student gpa: %lf\n", ekin.gpa);

    printStudent(ekin);
    return 0;
}