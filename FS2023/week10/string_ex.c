#include<stdio.h>

#define DATA 10

int main() {
    // initializing a character array, which also known as strings
    // char name[20] = {'e', 'k', 'i', 'n', 'c', 'a', 'n', '\0'};

    /* 
        arrays without brackets will give you the address 
        of the first element (index 0).
        scanf requires the address information so you do not 
        include the brackets in the scanf. You just provide 
        the array name.
    */ 
    // char firstname[20];
    //scanf("%s", firstname);

    /* If your array contains an element with '\0', that is a NULL
        character and printf only print the elements before your 
        for the '\0'. 
    */
    char lastname[100] = {'e', 'k', 'i', 'n', '\0', 'c', '\0', 'n'};
    //gets(lastname);
    printf("Hello %s\n", lastname);
    return 0;
}