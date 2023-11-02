#include<stdio.h>

int main() {

    int data = 5;
    int value = 6;
    int* ptr = NULL;
    printf("Data: %d\n", data);
    printf("Address: %p\n", &data);
    
    ptr = &data;
    *ptr = value;

    printf("Data: %d\n", data);
    printf("Address: %p\n", &data);

    printf("(P) Data: %d\n", *ptr);
    printf("(P) Address: %p\n", ptr);

    //int* ptr;
    return 0;
}