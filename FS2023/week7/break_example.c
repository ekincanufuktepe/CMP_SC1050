#include<stdio.h>

int main() {

    int x = 0;
    int sum = 0;

    for(int i=0; i<10; ++i){
        for(x = 1; x <= 10; x++) {
            if(x == 5) {
                break;
                //continue;
            }
            sum += 1;
        } 
    }
    
    printf("Sum: %d\n", sum);

    return 0;
}