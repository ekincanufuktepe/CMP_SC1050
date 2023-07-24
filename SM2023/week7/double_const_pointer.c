#include<stdio.h>

int main() {
    int x = 5;
    int y = 7;
    int* const p1 = &x;     // the value can be modified
    //p1 = &x;  // invalid
    //p1 = &y;  // invalid
    *p1 = y;    // valid
    
    const int* p2 = NULL;   // only address is modifiable
    p2 = &x;    // valid
    p2 = &y;    // valid
    //*p2 = 9;    // invalid

    const int* const p3 = &x;   // address and value cannot be modified
    //p3 = &y;    // invalid
    //*p3 = 10;   // invalid
    return 0;
}