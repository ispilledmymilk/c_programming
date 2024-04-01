#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//first understand that merge sort uses recurstion to solve the problem and sort the array, so we will have a base case and the recursive call
void merge_sort(int a[], int t[], int n){
    // the function is defined with 3 parameters, a[] is the array to be sorted, t is the temporary array and n is the size of the array
    
    if(n <= 1){     
        return;     //if n is <= 1 then the array is already sorted since it has only one element so we end the program
    }
    // now we start the recursive process by first figuring out what to call in the recursion as parameters.
    int middle = (n + 1)/2;
    //(pointers and arrays are the same thing and are interchangable)
    int *lower = a;     //represents the lower half of the array 
    int *upper = a + middle;    //represents the upper half of the array
    
    //the recursive call
    merge_sort(lower, t, middle);   //the array to be sorted is lower, t is still the temporary array and now the size of lower is middle(the calculated half of the original array);
    merge_sort(upper, t, n - middle);   //the array in this is upper, t is the temp array and the size is the number of elements that are left after using lower thats why it is n - middle
    
    int i = 0;      //the beginning index of the lower array
    int j = middle;     //the beginning index of the upper array
    int k = 0;      //the beginning index of the temporary array
    
    while(i < middle && j < n){
        if(a[i] <= a[j])    //if the element in lower is lesser than or equal to the element in upper
            t[k++] = a[i++];    //the temp array copies the element from lower into itself
        else
            t[k++] = a[j++];    //if it is higher then it will copy the element in the upper
    }
    while(i < middle)       //this loop copies any other missing/remaining elements from lower to the temp
        t[k++] = a[i++];
        
    while(j < n)            //this loop copies any other missing/remaining elements from the upper to the temp
        t[k++] = a[j++];
        
    for(i = 0; i < n; ++i){     //this is to copy everything back to the original array
        a[i] = t[i];
    }
    
}

void sort(int a[], int n){  //
    int *t = malloc(n * sizeof(a[0]));  //we are allocating a space that is as big as the array 'a' to a pointer called t
    assert(t);  //we make sure t has the space by this
    merge_sort(a, t, n);    //calling merge sort
    free(t);    //this is to delete t basically
}

int main(){
    int a[] = {38, 27, 43, 3, 9, 82, 10};
    const int n = sizeof(a) / sizeof(a[0]);
    sort(a, n);
    for(int i = 0; i < n - 1; ++i) printf("%d, ", a[i]);
    printf("%d\n", a[n - 1]);
    
}
