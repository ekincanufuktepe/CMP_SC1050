#include<stdio.h>

int main() {

    int x = 5;

    printf("x:%d\n", x);
    x++;    // post-increment
    printf("x:%d\n", x);
    ++x;    // pre-increment
    printf("x:%d\n", x);

    int y = 5;

    printf("y:%d\n", y);
    printf("y:%d\n", y++);  // post-increment and print 
    printf("y:%d\n", ++y);  // pre-increment and print
    printf("Final y value: %d\n", y);
    
    int count = 0;
    /*
        check count values respectively: 
            1(true), 2(true), 3(true), 4(true), 5(false)
    */
    while(++count != 5) // increment count by 1 and check if it is not equal to 5
    { 
        printf("count:%d\n", count);
    }

    count = 0;
    /*
        check count values respectively: 
            0(true), 1(true), 2(true), 3(true), 4(true), 5(false)
    */
    while(count++ != 5) // check if count is not equal to 5 then increment by 1
    {
        printf("count:%d\n", count);
    }

    return 0;
}