#include <stdio.h>

void insertion_sort(int *a, int n){
    int i, j, x;
    for(i = 1; i < n; ++i){     //for every position in the array
        x= a[i];        //we set x to be the element at that position
        for(j = i; j > 0 && x < a[j - 1]; --j){     //for every element at a position greater than i and if x is lesser than the element at j-1 we set j to be j - 1
            a[j] = a[j - 1];
        }
        a[j] = x;       //then you set the element at j to be x
    }
}

int main(){
    int a[] = {-10, 2, 14, -7, 11, 38};
    const int n = sizeof(a) / sizeof(a[1]);
    
    insertion_sort(a, n);
    for(int i = 0; i < n - 1; ++i){
        printf("%d\t", a[i]);
    }
    printf("%d\n", a[n - 1]);
}
