#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7

int main(){
    srand(time(NULL));
    
    int freq[SIZE] = {0};
    
    for(size_t i = 0; i < 60000000; ++i){
        size_t face = 1 + rand() % 6;
        ++freq[face];
    }
    
    printf("Face\tFrequency\n");
    
    for(size_t face = 1; face < SIZE; ++face){
        printf("%zu\t\t%d\n", face, freq[face]);
    }
}
