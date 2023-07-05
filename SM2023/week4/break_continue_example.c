#include<stdio.h>

int main() {

    int count = 0;
    while(count < 10) {
        count++;        
        if(count == 3){
            continue;
        }  
        printf("Count: %d\n", count);
    }
    return 0;
}