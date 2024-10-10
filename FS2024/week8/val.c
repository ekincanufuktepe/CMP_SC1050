#include<stdio.h>

int main() {
    // VAL (Variable Array Length). This may not be supported on every environment
    // VAL arrays will still be allocated on the stack memory.
    int size = 0;
    scanf("%d", &size);

    char name[size];
    scanf("%s", name);

    printf("Name: %s\n", name);
    printf("Size of array: %d\n", (int)sizeof(name));

    return 0;
}