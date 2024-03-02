#include <stdio.h>
#define SIZE 10

int main(){
    int a[SIZE] = {23, 51, 87, 65, 19, 90, 37, 22, 48, 56};
    printf("Real array is : \n");
    for(size_t i = 0; i < SIZE; ++i){
        printf("%d\t", a[i]);
    }
    printf("\n");
    
    for(int pass = 0; pass < SIZE; ++pass){
        for(size_t i = 0; i < SIZE - 1; ++i){
            if(a[i]>a[i + 1]){
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    for(size_t i = 0; i < SIZE; ++i){
        printf("%d\t", a[i]);
    }
    printf("\n");
    
}
