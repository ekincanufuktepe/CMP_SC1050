#include<stdio.h>

int main() {

    char str_1[] = "hello";
    // char str_2[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char str_2[] = {'h', 'e', 'l', 'l', 'o'};

    printf("size of str_1: %zu\n", sizeof(str_1));
    printf("size of str_2: %zu\n", sizeof(str_2));

    printf("value of str_1: %s\n", str_1);
    printf("value of str_2: %s\n", str_2);

    char name[50] = {0};
    char lastname[50] = {0};
    scanf("%49s %49s", name, lastname);
    printf("Name: %s %s\n", name, lastname);
 
    return 0;
}