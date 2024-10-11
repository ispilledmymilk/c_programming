#include <stdio.h>
#include <assert.h>

/*int print(int a[], int size){
    for (int j = 0; j < size; ++j){
        printf("%d ", a[j]);
    }
    printf("\n");
}*/

// Convert number to array of digits
int num_array(long long int n, int a[]){
    int i = 0;
    if(n == 0){
        a[i++] = 0;  // Special case for when n is 0
    } else {
        while(n != 0){
            a[i++] = n % 10;
            n /= 10;
        }
    }
    return i;  // Return the size of the array
}

// Sort the array of digits in ascending order
void bubble_sort(int a[], int size){
    for(int pass = 0; pass < size - 1; ++pass){
        for(int i = 0; i < size - 1 - pass; ++i){
            if(a[i] > a[i + 1]){
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
}

// Remove the smallest k digits and return the result as an integer
int removekdigits(long long int n, int k) {
    int a[10];  // Array to hold digits, assuming the number has at most 10 digits
    int size = num_array(n, a);  // Get digits and size
    //print(a, size);
    bubble_sort(a, size);  // Sort digits in ascending order
    //print(a, size);
    

    // Special case: if k is equal to the number of digits, return 0
    if (k >= size) {
        
       // printf("%d\n", 0);
        return 0;
        
    }
    else{
    // Construct the final number after removing the smallest 'k' digits
    int result = 0;
    for(int j = 0; j < size - k; ++j){
       result = result * 10 + a[j];  // Construct the number
       
       
    }
    //printf("%d\n", result);
    return result;
    }
    
}

/*int main(){
    // Adding assert statements to check the correctness of the code
   removekdigits(345267, 3);
    removekdigits(0, 0);
   removekdigits(9, 1);
    removekdigits(871, 0);
   removekdigits(9898989, 2);

    //printf("All test cases passed!\n");
    return 0;
}
*/
