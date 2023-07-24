#include<stdio.h>

struct employee {
    char name[50];
    double salary;
} person, people[10];

int main() {
    person.salary = 1000000.0;
    printf("%lf\n", person.salary);
    return 0;
}