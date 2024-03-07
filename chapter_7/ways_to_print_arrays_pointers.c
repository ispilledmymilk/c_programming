#include <stdio.h>
#define SIZE 4

int main(){
    int b[] = {10, 20, 30, 40};
    int *bptr = b;
    //normal printing
    for(size_t i =0; i<SIZE; ++i){
        printf("%d\t",b[i]);
    }
    printf("\n");
    //using ptr to add the size of each element to the prev element
    for(size_t z = 0; z<SIZE; ++z){
        printf("%d - %zu\t", *(bptr + z), z);
    }
    printf("\n");
    //printing normal but u can interchange the array name with the pointer name
    for(size_t j = 0; j<SIZE; ++j){
        printf("%d\t", bptr[j]);
    }
    printf("\n");
    
    for(size_t p = 0; p<SIZE; ++p){
        printf("%d\t", *(b + p));
    }

    
    
    return 0;
}
