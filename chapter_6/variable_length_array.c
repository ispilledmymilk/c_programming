#include <stdio.h>

int main(){
    int size = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int a[size];
    
    for(size_t i = 0; i <size ; ++i){
        printf("Enter element please: ");
        scanf("%d", &a[i]);
    }
    
    for(int passes = 0; passes < size; ++passes){
        for(size_t i = 0; i <(size - 1); ++i){
            if(a[i] > a[i + 1]){
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    
    for(size_t i = 0; i <size; ++i){
        printf("%d\t", a[i]);
    }
}
