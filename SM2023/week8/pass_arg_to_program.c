#include<stdio.h>
#include<stdlib.h>

/*
    argc: is the number of arguments passed to the program (including the executable file)
    argv: is an array of the arguments passed to the program (main) as a string (char[]).
            The first element in argv is the executable file.
            For example: gcc my_code.c      --> compile
                         ./a.out 1 test b   --> run
                         argv list: argv[0]: ./a.out, argv[1]: 1, argv[2]: test, argv[3]: b
                         argc: 4
*/
int main(int argc, char* argv[]) {

    printf("argument count: %d\n", argc);
    
    for(int i=0; i<argc; i++) {
        if(i == 1) {
            printf("argv[%d]: %d\n", i, atoi(argv[i]));
        }
        else {
            printf("argv[%d]: %s\n", i, argv[i]);    
        }   
    }

    return 0;
}