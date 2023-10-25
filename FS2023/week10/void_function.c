#include<stdio.h>

void printName(char[]);

int main() {
    char name[20];
    scanf("%s", name);
    printName(name);
    return 0;
}

void printName(char n[]) {
    printf("Hi %s, nice to meet you!\n", n);
    return;
}