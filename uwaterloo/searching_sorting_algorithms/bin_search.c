#include <stdio.h>

int bin_search(int a[], int n, int value){
    int low = 0, hi = n - 1;
    while(hi >= low){
        int m = low = (hi - low)/2;
        if(a[m] == value)
            return m;
        if(a[m] < value)
            low = m + 1;
        if(a[m] > value)
            hi = m - 1;
    }
    return -1;
}

int main(){
    int a[] = {-10, -7, 0, 2, 11, 14, 38, 42};
    const int len = sizeof(a) / sizeof(a[1]);
    int value = 0;
    printf("Enter the value you are looking for: ");
    scanf("%d", &value);
    int reply = bin_search(a, len, value);
    if(reply != -1){
        printf("Exists in the array! ");
    }
    else
        printf("Not in the array! ");
  
}
