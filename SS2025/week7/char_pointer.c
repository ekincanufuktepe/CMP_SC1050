#include<stdio.h>

int main() {

    char name[20] = "ekincan";
    char* newName = "ekincan";

    printf("old Name: %s\n", name);
    printf("new Name: %s\n", newName);

    name[0] = 'a';
    newName[0] = 'a';

    printf("old Name: %s\n", name);
    printf("new Name: %s\n", newName);

    return 0;

}