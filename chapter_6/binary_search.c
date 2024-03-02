#include <stdio.h>
#define SIZE 15

int binarysearch(const int a[], int key, size_t low, size_t high){
    while(low <= high){
        size_t middle = (low + high) / 2;
        
        if(key == a[middle]){
            return middle;
        }
        else if(key > a[middle]){
            low = middle+ 1;
        }
        else if(key < a[middle]){
            high = middle- 1;
        }
    }
    return -1;
}

int main(){
    int a[SIZE] = {0};
    
    for(size_t i = 0; i<SIZE; ++i){
        a[i] = 2 * i;
    }
    int key = 0;
    printf("Enter a number between 0 and 28: ");
    scanf("%d", &key);
    
    int ans = binarysearch(a, key, 0, SIZE - 1);
    
    if(ans != -1){
        printf("The key is found! \n");
    }
    else{
        printf("The key is not found! \n");
    }
}

