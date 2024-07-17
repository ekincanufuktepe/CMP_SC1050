#include<stdio.h>

int main() {

    // char name[8]
    //char name[] = "ekincan\0ufuktepe";
    char name[] = "ekin"; // {'e', 'k', 'i', 'n', '\0'};
    char alt_name[] = {'e', 'k', '\0', 'i', 'n', };

    char null_char = '\0';

    printf("int value of null char: %d\n", null_char);

    printf("your name is: %s\n", alt_name);
    
    printf("size of the alt_name[] array: %d\n", ((int)sizeof(alt_name)));
    printf("size of the name[] array: %d\n", ((int)sizeof(name)));


    // printf("Your name is: %s\n", name);
    // printf("Your name starts with: %c\n", name[0]);
    // printf("The second character of your name is: %c\n", name[1]);
    // printf("Your name ends with: %c\n", name[((int)sizeof(name))-2]);

    // size of a char type is 1 byte.
    // "ekincan" has 7 character == 7 bytes.
    // +1 byte for the '\0', so the name[] is 8 bytes
    // printf("size of the name[] array: %d\n", ((int)sizeof(name)));

    return 0;
}