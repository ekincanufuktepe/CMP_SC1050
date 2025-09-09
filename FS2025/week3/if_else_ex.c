#include<stdio.h>

int main() {

    int grade = 100;

    if(grade >= 90) {
        printf("A\n");
        printf("Kudos!\n");
    }
    else if(grade >= 80)
        printf("B\n");
    else 
        printf("Other\n");

    return 0;
}