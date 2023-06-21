#include<stdio.h>

int main() {

    /*
        You can define none or more than one expression
        where we initialize the control variables (1st region), 
        and the post-executed expressions (3rd region).
    */
    for(int i=0, j=3; i<j; i = i + 2, j = j + 1) {
        printf("I am in the for loop\n");
        printf("i: %d, j:%d\n", i, j);
    }

    int i=3;
    /* The block with loop printing is not
        a part of the while loop!

        The semi-colon at the end of the while
        indicates that it is the end of the while
        loop.

        With the semi-colon you print "loop" only once

        Without the semi-colon you print "loop" twice,
        because now the printf is a part of the while
        statement.
    */
    while((i = i -1) != 0);
    {
        printf("loop\n");
    }

    return 0;
}