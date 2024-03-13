#include <stdio.h>

int *max_arr(int a[], int n){
    // max holds the value of the first element
    int max = a[0];
    //res holds the address of the first element
    int *res = &a[0];
    for(int i = 1; i <n; ++i)
    if(a[i]>max){
        // max holds the value of the element that is the max
        max = a[i];
        // res holds the value of the element's address
        res = &a[i];
    }
    return res;
}

int main(){
    int a[10] = {1, 10, 67, 876, -76, 0 , -45, 8, 9, 1};
    // by using a pointer, we just change the address that the pointer is pointing to without the need to create new addresses
    int *max = max_arr(a, 10);
    printf("%d", *max);
}
