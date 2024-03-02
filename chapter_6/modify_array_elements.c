#include <stdio.h>
#define SIZE 5

void modifyarray(int a[], int size);
void modifyelement(int e);

int main(){
    int array[SIZE] = {0,2,7,3,6};
    
    for(size_t i = 0; i < SIZE; ++i){
        printf("%d\t", array[i]);
    }
    printf("\n");
    modifyarray(array, SIZE);
    printf("Modified array is \n");
    for(size_t j = 0; j <SIZE; ++j){
        printf("%d\t", array[j]);
    }
    printf("\n");
    
    modifyelement(array[2]);
    
    printf("the value of array[2] is %d\n", array[2]);
    return 0;
}

void modifyarray(int a[], int size){
    for(size_t x = 0; x < size; ++x){
        a[x] += 4;
    }
}

void modifyelement(int e){
     e = 1;
     printf("Value of modified element is %d\n", e);
}
