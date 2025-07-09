#include<stdio.h>
#include<string.h>

int main() {

    // char s1[] = "hell1";
    // char s2[] = {'h', 'e', 'l', 'l', '2', '\0'};
    char dummy = '\0';
    printf("whitespace int value: %d\n", dummy);
    char s3[] = {'h', 'e', 'l', 'l', 'o', 0, 'w', 'o','r', 'l', 'd'}; // bad practice

    // printf("s1: %s, length: %ld\n", s1, strlen(s1));
    // printf("s2: %s, length: %ld\n", s2, strlen(s2));
    printf("s3: %s, length: %ld\n", s3, strlen(s3));


    return 0;
}