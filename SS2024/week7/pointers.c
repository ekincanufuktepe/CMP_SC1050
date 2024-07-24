#include<stdio.h>

int main() {
    const int a = 5;
    int* ptr = &a; // fine but will get a warning
    printf("Address of a (pointer): %p\n", ptr);

    if (ptr == NULL) {
        fprintf(stderr, "Pointer is NULL!\n");
        return -1;
    }
    *ptr = a;
    // address info
    printf("Address of a: %p\n", &a);
    printf("Address of a (pointer): %p\n", ptr);

    // value info
    printf("Value of a: %d\n", a);
    printf("Value of a (pointer): %d\n", *ptr);

    // a++; // cannot do this because 'a' is const
    *ptr += 1; // still can modify 'a' through a pointer but not recommended. 

    printf("Value of a: %d\n", a);
    printf("Value of a (pointer): %d\n", *ptr);

    // (*ptr)++;
    ++*ptr;

    printf("Value of a: %d\n", a);
    printf("Value of a (pointer): %d\n", *ptr);

    return 0;
}