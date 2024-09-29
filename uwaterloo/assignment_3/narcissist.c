#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

int numberPairs(int n){
    int number = 0;
    if(n % 10 == n){
        number+= n;
        return n;
    }
    else if(n%10 < n){
        
        numberPairs(n/10);
        number+=n;
        printf("%d%d", n%10);
    }
    printf("\n");
    printf("%d", number);
    
}

bool narcissist(int n){
    
}

int main(){
    
}
