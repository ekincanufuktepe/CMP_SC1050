#include <stdio.h>
/* This program intends to move the point to the right
    by adding 10 to x.
    There is 1 BUG in the code, fix the bug so that the program runs correctly
*/
struct Point {
    int x;
    int y;
};

void moveRight(struct Point *p) {
    p.x += 10;
}

int main(void) {
    struct Point pt = { .x = 5, .y = 7 };

    printf("Before: (%d, %d)\n", pt.x, pt.y);

    moveRight(&pt);

    printf("After: (%d, %d)\n", pt.x, pt.y);

    return 0;
}




