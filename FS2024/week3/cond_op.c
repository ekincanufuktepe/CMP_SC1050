#include<stdio.h>

int main() {
    
    int grade;
    printf("Enter your grade: ");
    scanf("%d", &grade);

    // <your condition> ? <when-true> : <when-false>
    char status = grade <= 59 ? 'F' : 'P';
    
    // version A
    printf("(A) Student Status: %c\n", grade <= 59 ? 'F' : 'P');
    // OR
    // version B
    printf("(B) Student Status: %c\n", status);

    return 0;
}