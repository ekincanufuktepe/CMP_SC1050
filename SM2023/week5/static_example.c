#include<stdio.h>

void update_wo_static(int);
void update_w_static(int);

int main() {
    update_wo_static(2);
    update_wo_static(2);
    update_wo_static(2);

    update_w_static(2);
    update_w_static(2);
    update_w_static(2);
    return 0;
}

void update_wo_static(int x) {
    int count = 1;
    count = count * x;
    printf("W/O static count: %d\n", count);
}

void update_w_static(int x) {
    static int count = 1;
    count = count * x;
    printf("With static count: %d\n", count);
}