#include<stdio.h>

int main() {
    int flag = 0;
    int x = 0;
    for(int i=0; i<3; i++) {
        for(int k=0; k<3; k++) {
            x++;
            if(k == 1) {
                flag = 1;
                break;
            }
            // printf("(%d, %d) x is: %d\n", i, k, x);
        }
        if(flag) {
            break;
        }
    }

    printf("x: %d\n", x);
}