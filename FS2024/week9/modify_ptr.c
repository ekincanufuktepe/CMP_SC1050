#include<stdio.h>

int main() {

    char secret[10] = "secret";
    char name[10] = "ekincan";
    
    printf("Addr. of name: %p\n", name);
    printf("Addr. of secret: %p\n", secret);

    char* namePtr = name;
    // const char* namePtr;
    // namePtr = name;
    // namePtr -= 10;
    for(int i=0; i<10; i++) {
        printf("%c", ++(*namePtr));
        namePtr++;
    }
    printf("\n");
    printf("Name: %s\n", name);

    return 0;
}