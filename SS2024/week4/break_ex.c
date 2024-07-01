#include<stdio.h>

int main() {

    int count = 0;
    int flag = 0;
    for(int i=0; i<4; i++) {
        for(int j=0; j<3; j++) {
            ++count;
            if(count == 7) {
                flag = 1;
                break ;
            }
            printf("Count: %d\n", count);
        }
        if(flag) {
            break;
        }
    }

    return 0;
}