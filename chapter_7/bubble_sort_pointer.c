#include <stdio.h>
#define SIZE 10

void bubblesort(int * const arr, size_t size){
    void swap(int *e1, int *e2);
    
    for(int j = 0; j < SIZE- 1; ++j){
        for(size_t i = 0; i <SIZE - 1; ++i){
            if(arr[i] > arr[i + 1]){
              swap(&arr[i], &arr[i + 1]);  
            }
        }
    }
}

void swap(int *e1, int *e2){
    int hold = *e2;
    *e2 = *e1;
    *e1 = hold;
}

int main(){
    int a[SIZE] = {2, 4, 6, 8, 10, 12, 89, 68, 45, 37};
    
    for(size_t i = 0; i <SIZE; ++i){
        printf("%d\t", a[i]);
    }
    
    bubblesort(a, SIZE);
    
    for(size_t i = 0; i <SIZE; ++i){
        printf("%d\t", a[i]);
    }
    
    
    return 0;
}
