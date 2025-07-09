#include<stdio.h>

int main() {

    int list[5];

    for(int i=0; i<5; i++) {
        list[i] = i;
    }

    printf("Address if list: %p\n", list);
    printf("Address if list[0]: %p\n", &list[0]);
    for(int i=0; i<5; i++) {
        printf("list[%d]= %d, Address= %p\n", i, list[i], &list[i]);
    }


    return 0;
}