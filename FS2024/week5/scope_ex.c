#include <stdio.h>

int x = -1; // global variable, avoid using global variables with all cost.

void foo() {
    x++;
    printf("(foo) x: %d\n", x);
}


int main() {
    // foo();
    // printf("(main) x: %d\n", x);
    // x++;
    // foo();
    printf("x: %d\n", x);
    int x = 0;
    {
        int x = 5;
        {
            int x = 3;
        }
        
    }
    return 0;
 
}