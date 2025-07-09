#include<stdio.h>

int main() {

    char name[20] = {0};

    scanf("%19[^\n]", name);

    printf("Name: %s\n", name);

    return 0;
}