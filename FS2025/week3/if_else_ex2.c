#include<stdio.h>

int main() {

    int grade = 100;

    if(grade >= 90)
        printf("A\n");
    if(grade >= 80)
        printf("B\n");
    if(grade >= 70)
        printf("C\n");
    else 
        printf("Other\n");

    return 0;
}