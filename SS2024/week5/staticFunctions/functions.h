#include<stdio.h>

/*
    When defining a static function in C, you do not 
    need to (and should not) add the static keyword 
    to the prototype in the header file. The static 
    keyword is used to limit the scope of the function 
    to the file where it is defined, and thus, it should 
    not be exposed in the header file. Instead, you 
    only include the static keyword in the function 
    definition within the source file.
*/

/*
    In fact, it is even better not to even include the function 
    prototype in the header file if it static, because you will
    not be exposing it at all.
*/  
// void functionA(); // this function will be defined static in the source file

void functionB();