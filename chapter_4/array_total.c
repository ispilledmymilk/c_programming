#include <stdio.h>

#define SIZE 5

int main(){
    int s[SIZE]={0};
    int total = 0;
    
    for (size_t i = 0; i<SIZE;++i){
        s[i] = 2+ 2*i; 
        printf("%zu %d\n", i , s[i]);
        total += s[i];
    }
    printf("total is %d", total);
}
