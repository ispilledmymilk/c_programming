#include <stdio.h>

void swap(int *a, int *b){      //this is swapping of 2 elements in the array
    int t = *a;
    *a = *b;
    *b = t;
}

void quick_sort(int a[], int n){    //for quick sort you need only the array and the length of the array as parameters
    if(n <= 1)  return;     //if there are less than one element in the array it would mean that the array is already sorted
    int m = 0;      // we set m to be the position in the array in which we will be 
    for(int i = 1; i < n; ++i){
        if(a[i] < a[0]){
            m++;
            swap(&a[m], &a[i]);
        }
    }
    swap(&a[0], &a[m]);
    quick_sort(a, m);
    quick_sort(a + m + 1, n - m - 1);
}

int main(){
    int a[] = {-10, 2, 14, -7, 11, 38};
    const int n = sizeof(a) / sizeof(a[0]);
    quick_sort(a, n);
    for(int i = 0; i < n - 1; ++i)
        printf("%d, ", a[i]);
    printf("%d\n", a[n - 1]);
}
