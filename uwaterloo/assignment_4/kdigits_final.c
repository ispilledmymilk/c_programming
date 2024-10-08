#include <stdio.h>
#include <assert.h>

int num_array(long long int n, int a[], int size ){
    int i = 0;
    while(n != 0){
        a[i] = n % 10;
        n /= 10;
        i++;
    }
}

int bubble_sort(int a[]){

    for(int pass = 0; pass < 10; ++pass){
        for(size_t i = 0; i < 10 - 1; ++i){
            if(a[i]>a[i - 1]){
                int temp = a[i];
                a[i] = a[i - 1];
                a[i - 1] = temp;
            }
        }
    }
 
}

int removekdigits(long long int n, int k) {
    // first convert the number into an arrqay
    int a[10];
    num_array(n, a, 10);
    bubble_sort(a);

    if(a[k - 1] == 0){
            printf("%d", a[k - 1]);
        }

    
    
    for(int j = 9; j >= k; --j){
         if(a[j] != 0){
            printf("%d", a[j]);
        }
    }

    }
