#include<stdio.h>

int main() {

    char x = ' ';
    char y = '\0';
    printf("integer value of whitespace: %d\n", x);
    printf("integer value of null character: %d\n", y);

    char string[10] = {'a', 'b', 'c', 0, 'd', '\0'};
    printf("sizeof array: %d\n", (int)sizeof(string)); 
    printf("String data: %s\n", string);

    char name[50] = {0};
    // for(int i=0; i<50; i++) {
    //     name[i] = 68;
    // }

    scanf("%[^\n]", name);  // get the line as a string. Note: Not the best solution. Consider using fgets.
    //fgets(name, 50, stdin);
    // name[7] = 68;
    printf("Your name is: %s\n", name);

    for(int i=0; i<50; i++) {
        printf("name[%d] = %d\n", i, name[i]);
    }

    return 0;
}