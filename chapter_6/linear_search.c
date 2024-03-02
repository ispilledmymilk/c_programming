#include <stdio.h>
#define SIZE 100

int linear_search(int a[], int key, int size){
    for(size_t i = 0; i<SIZE; ++i){
        if(a[i] == key){
            return key;
        }
        
    }
    return -1;
}

int main(){
    int a[SIZE] = {0};
    
    for(size_t i = 0; i<SIZE; ++i){
        a[i] = 2 * i;
        printf("%d\t", a[i]);
    }
    printf("\n");
    
    int searchkey = 0;
    printf("Enter the search key: ");
    scanf("%d", &searchkey);
    
    int subscript = linear_search(a, searchkey, SIZE);
    
    if(subscript == searchkey){
        printf("The number has been found in the array");
    }
    else if(subscript == -1){
        printf("The number doesnt exist in the array");
    }
}
