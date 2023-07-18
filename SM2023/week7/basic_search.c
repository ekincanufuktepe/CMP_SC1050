#include<stdio.h>

int find_index(const int[], int, int);

/*
    A linear search example
*/

int main() {
    int list[] = {1,7,4,8,2,0,8,2,4,6,1,-2,246,234,71};
    int size = (int) sizeof(list)/sizeof(list[0]);

    int search_input = 90;

    printf("Data: %d, is at index: %d\n", search_input, find_index(list, size, search_input));

}

/* 
    This function will return the index/position of the first
    occurrance of the data. If the data does not exist, it will
    return -1, which is an invalid index/position.

    Note: The first const parameter, will prevent any modification 
    done on the passed array. 
*/
int find_index(const int list[], int size, int search_input) {
    for(int i=0; i<size; ++i) {
        if(list[i] == search_input) {
            return i;
        }
    }
    return -1;
}