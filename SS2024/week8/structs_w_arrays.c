#include<stdio.h>
#include<stdlib.h>

// you can use typedef to refer to the struct type you have defined
// with the code below you no longer have to use "struct employee" to
// define the struct type, and can use "Employee" instead.
typedef struct employee {
    char name[20];
    double salary;
} Employee;

void print_employee_list(Employee*);

int main() {

    // Employee employee_list[3];
    
    // the dynamic allocation version
    Employee* employee_list = NULL;
    employee_list = calloc(3, sizeof(*employee_list)); // dynamically allocate 3 spaces of Employee type

    char dummy;
    for(int i=0; i<3; i++) {
        printf("\nEnter Employee name: ");
        //fgets(employee_list[i].name, 20, stdin);
        fgets((employee_list+i)->name, 20, stdin);
        printf("Enter Employee salary: ");
        // fgets(&employee_list[i].salary, 1, stdin);
        // scanf("%lf", &(employee_list[i].salary));
        scanf("%lf", &((employee_list+i)->salary));
        scanf("%c", &dummy);
    }

    print_employee_list(employee_list);

    free(employee_list);
    return 0;
}

void print_employee_list(Employee* list) {
    for(int i=0; i<3; i++) {
        printf("\nEmployee name: %s\n", (list+i)->name);
        printf("Employee salary: %lf\n", list[i].salary);
    }
}