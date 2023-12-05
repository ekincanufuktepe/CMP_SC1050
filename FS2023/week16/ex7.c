#include<stdio.h>

int main() {

    int x = 2;
    printf("Regular printf, x:%d\n", x);
    fprintf(stderr, "There is an error!, x:%d\n", x);
    
    fprintf(stdout, "fprintf example with stdout, x:%d\n", x);
}