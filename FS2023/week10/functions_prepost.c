#include<stdio.h>

int inc(int);

int main(){
    int a = 0;
    printf("Return: %d\n",inc(++a));
    printf("a: %d\n", a);
    return 0;
}

int inc(int x) {
    return x++;
}