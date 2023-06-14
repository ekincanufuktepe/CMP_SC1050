#include<stdio.h>

int main() {

    char name[5];

    printf("Enter a name:\n");
    scanf("%s", name);

    printf("Hi %s, nice to meet you!\n", name);
    printf("Your name starts with a '%c'\n", name[0]);

    return 0;
}