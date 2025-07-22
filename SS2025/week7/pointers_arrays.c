#include<stdio.h>

int main() {

    char name[20] = "ekincan";
    char* namePtr = NULL;

    // namePtr = name + 1;
    // namePtr = &name[1];
    namePtr = name;

    // printf("character: %c\n", *namePtr);

    // printf("character: %p\n", &name[0]);
    // printf("character: %p\n", &name[1]);
    // printf("character: %p\n", namePtr);

    printf("character: %c\n", namePtr[3]);

    int x[20];
    for(int i=0; i<20; i++) {
        x[i] = i;
    }

    int* xPtr = NULL;

    xPtr = x;

    printf("Address of x[0]: %p\n", xPtr);
    xPtr += 12;
    printf("Address of x[12]: %p\n", xPtr);

    printf("value: %d\n", *(xPtr + 12));


    return 0;
}