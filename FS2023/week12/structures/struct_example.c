#include<stdio.h>
#include<stdlib.h>
// Try reordering the members and check the size of the variable of struct A.
// This is because of the alignment in the memory.
// struct A {
//    char x;
//    int z;
//    double y;
// };

// Alternative #1 to define structs
// This requires to define variables as "struct Employee varName;"
// struct Employee {
//     char* name;
//     int age;
// };

/* Alternative #2 to define structs
    using typedef will allow you create a synonym, 
    so you don't have to use "struct Employee varName;"
    to declare types. You can now use is as "Employee varName;"
*/
typedef struct {
    char* name;
    int age;
} Employee;

// struct Company {
//     char* company_name;
//     int est_year;
//     struct Employee emp[10];
// };

typedef struct {
    char* company_name;
    int est_year;
    //struct Employee emp[10];
    Employee emp[10];
} Company;

int main() {
    // Test the sizes of the struct A, with different member orders.
    // struct A varA;
    // printf("type A size: %d\n", (int)sizeof(varA));
    
    // Stack allocated variable
    
    // struct Employee emp1;
    // emp1.age = 30;
    // emp1.name = "Ekincan\0";
    // printf("Name: %s\n", emp1.name);
    // printf("Age: %d\n", emp1.age);

    // Heap (dynamically) allocated variable
    Employee* emp1;
    emp1 = NULL;
    emp1 = calloc(1,sizeof(Employee));
    (*emp1).name = "Ekincan";
    emp1->age = 30;

    Employee emp2;
    // emp2.age = 20;
    (&emp2)->age = 20;
    emp2.name = "Jibesh";
    // printf("Name: %s\n", emp2.name);
    // printf("Age: %d\n", emp2.age);

    //struct Company mu1050Survivors;
    Company mu1050Survivors;
    mu1050Survivors.company_name = "MU CS1050 Survivors\0";
    mu1050Survivors.est_year = 2023;
    mu1050Survivors.emp[0] = *emp1;
    mu1050Survivors.emp[1] = emp2;

    printf("Company %s employee info:\n", mu1050Survivors.company_name);
    for(int i=0; i<2; i++) {
        printf("Employee Name: %s\n", mu1050Survivors.emp[i].name);
    }
    free(emp1);
    return 0;
}