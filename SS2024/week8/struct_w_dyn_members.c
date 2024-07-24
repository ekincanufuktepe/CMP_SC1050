#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// If you want dynamic members, use pointers and dynamically allocate them separately.
// However, be careful. Don't forget to free them. Otherwise you will have memory leaks.
typedef struct employee {
    char* name;
    double salary;
} Employee;

void print_employee_list(Employee*);

int main() {

    int num_of_employees = 0;
    printf("How many employee do you want?: ");
    scanf("%d", &num_of_employees);
    char dummy;
    scanf("%c", &dummy);

    // dynamically allocate "num_of_employees" amount of Employees. User-decided size.
    Employee* employee = NULL;
    employee = calloc(num_of_employees, sizeof(*employee));
    
    for(int i=0; i<num_of_employees; i++) {
        char name[100] = {0};
        fgets(name, 100, stdin);
        (employee + i)->name = calloc((int)strlen(name), sizeof(char)); // dynamically allocate enough space for the employee name
        strncpy((employee+i)->name, name, (int)strlen(name));
    }
    //fgets(name, 100, stdin);
    //printf("Size: %d\n", (int)strlen(name));

    for(int i=0; i<num_of_employees; i++) {
        printf("Employee name: %s\n", (employee+i)->name);
    }

    for(int i=0; i<num_of_employees; i++) {
        free((employee+i)->name); // free the dynamically allocated space for the employee names
    }
    
    //free(employee->name);
    free(employee); // than free employees, otherwise you will lose the pointer to the names.
    return 0;
}

void print_employee_list(Employee* list) {
    for(int i=0; i<3; i++) {
        printf("\nEmployee name: %s\n", (list+i)->name);
        printf("Employee salary: %lf\n", list[i].salary);
    }
}