#include <stdio.h>

int lin_Search(int a[], int n, int value){
    for(int i = 0; i< n; ++i){
        if(a[i] == value){
            return i;
        }
    }
    return -1;
}

int main(){
    int a[] = {19, 4, 6, 2, 7, 8};
    const int len = sizeof(len)/ sizeof(a[0]);
    int num = 0;
    printf("Enter the value you are trying to find in the array: ");
    scanf("%d", &num);
    
    if(lin_Search(a, len, num) != -1){
        printf("The number exists! ");
    }
    else
        printf("The number is not in the array! ");
    
}
