#include <stdio.h>

int main(){
    int fib[10];
    fib[0] = 1;
    fib[1] = 1;
    
    int i;
    for(i = 2; i < 10; i++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    
    for(int z = 0; z < 10; ++z){
        printf("%d ", fib[z]);
    }
}
