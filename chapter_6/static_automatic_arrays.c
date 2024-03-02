#include <stdio.h>

void staticarrayinit();
void automaticarrayinit();

int main(){
   printf("First call to each fn\n");
   staticarrayinit();
   automaticarrayinit();
   
   printf("Second call to each fn\n");
   staticarrayinit();
   automaticarrayinit();
}

void staticarrayinit(){
    static int array[3];
    
    printf("Values entering\n");
    
    for(size_t i =0; i<3; ++i){
        printf("%zu = %d\t", i , array[i]);
    }
    
    printf("Values exiting\n");
    
    for(size_t j = 0; j<3; ++j){
        printf("%zu = %d\t", j, array[j]+= 5);
    }
}

void automaticarrayinit(){
    int array[3] = {1, 5, 7};
    
    printf("Values entering\n");
    
    for(size_t i =0; i<3; ++i){
        printf("%zu = %d\t", i , array[i]);
    }
    
    printf("Values exiting\n");
    
    for(size_t j = 0; j<3; ++j){
        printf("%zu = %d\t", j, array[j]+= 5);
    }
}
