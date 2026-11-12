#include<stdio.h>

// struct data {
//     int x;
//     double y;
//     char z;
// };

struct data {
    char z;
    int x;
    double y;
    // struct data d; // not legal
    struct data *d; // legal
};

struct employee {
    char firstname[20];
    char lastname[20];
    int age;
    double hourlySalary;
    struct data d;
};

int main() {

    struct employee emp1;
    printf("Size of employee type: %zu\n", sizeof(emp1));

    struct data d;
    printf("Size of data type: %zu\n", sizeof(d));
    return 0;
}