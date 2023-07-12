#include<stdio.h>

#define SIZE 10

void print(int[]);
void bubblesort(int[]);

int main() {
    int list[SIZE] = {1,7,9,4,0,6,3,0,3,7};
    print(list);
    bubblesort(list);
    print(list);
    return 0;
}

void print(int list[]) {
    for(int i=0; i<SIZE; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");
}

void bubblesort(int list[]) {
    for(int i=0; i<SIZE; i++) {
        for(int j=i+1; j<SIZE; j++) {
            if(list[j] > list[i]) {
                int tmp = list[i];
                list[i] = list[j];
                list[j] = tmp;
            }
        }
    }
}