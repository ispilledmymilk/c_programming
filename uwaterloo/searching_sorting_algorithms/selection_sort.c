#include <stdio.h>

void selection_sort(int a[], int n){        
    for (int i = 0; i < n; ++i){//for every position in the array we set min to be that postion in the array
        int min = i;
        // then for all the positions greater than i
        for(int j = i + 1; j < n; ++j){
            //if the element on the right is lesser than the one on the left, we set min to be that position
            if(a[j] < a[min])
                min = j;
        }//then we do the swap of the elements at i and j
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
