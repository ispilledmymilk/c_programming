#include <stdio.h>

void selection_sort(int a[], int n){
    for (int i = 0; i < n; ++i){
        int min = i;
        for(int j = i+ 1; j < n; ++j){
            if(a[j] < a[min])
                min = j;
        }
        int temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }
}

int main(){
    int a[] = {20, 12, 10, 15, 2};
    const int n = sizeof(a) / sizeof(a[1]);
    selection_sort(a, n);
    for(int i = 0; i < n - 1; ++i){
        printf("%d, ", a[i]);
    }
    printf("%d\n", a[n - 1]);
}
