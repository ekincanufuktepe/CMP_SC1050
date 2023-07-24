#include<stdio.h>

// Alternative #1
typedef struct employee {
    char name[50];
    double salary;
} Employee;

// Alternative #2
typedef struct {
    char name[50];
    double salary;
} Employee2;

int main() {
    Employee person; // same as: struct employee person;
    person.salary = 1000000.0;
    printf("%lf\n", person.salary);

    Employee2 person2;
    person2.salary = 2000000.0;
    printf("%lf\n", person2.salary);

    return 0;
}