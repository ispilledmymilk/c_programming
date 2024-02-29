#include <stdio.h>
#define ARRAY 20
#define FREQ_SIZE 6

int main(){
    int resp[ARRAY] = {1, 2, 5, 4, 3, 5, 2, 1, 3, 1, 4, 3, 3, 3, 2, 3, 3, 2, 2, 5};
    
    int freq[FREQ_SIZE] = {0};
    
    for(size_t ans = 0; ans< ARRAY; ++ans){
        ++freq[resp[ans]];
    }
    printf("Rating \tFrequency\n");
        
    for(size_t i = 1; i < FREQ_SIZE; ++i){
        printf("%zu\t\t%d\n", i , freq[i]);
        }
    
}
