#include<stdio.h>

int main() {

    int x = 4;
    char a = 'a';

    char name[50];

    int id[25];

    printf("size of int x: %ld\n", sizeof(x));
    printf("size of char a: %ld\n", sizeof(a));
    printf("size of char name[50]: %ld\n", sizeof(name));

    printf("sizeof int id: %ld\n", sizeof(id));

    printf("Number of elements int id[]: %ld\n", sizeof(id)/sizeof(int));

    return 0;
}