#include<stdio.h>
// #include<malloc.h>
#include<stdlib.h>

int main() {
  int* intPtr = NULL;
  int* intPtr2;
  printf("address of intPtr: %p\n", intPtr);
  intPtr = malloc(sizeof(int));
  printf("address of intPtr: %p\n", intPtr);
  intPtr2 = malloc(sizeof(int));
  *intPtr = 42;
  printf("*intPtr: %d\n", *intPtr);
  free(intPtr);
  intPtr = NULL;
  printf("address of intPtr: %p\n", intPtr);
  if(intPtr) {
    printf("*intPtr: %d\n", *intPtr);
  }
  else {
    fprintf(stderr, "'intPtr' pointer is NULL!\n");
  }
  
  printf("address of intPtr2: %p\n", intPtr2);
  return 0;
}