#include <stdio.h>

int numberPairs(int n){
    if(n % 10 == n){
        printf("%d%d",n,n);
        //return n;
    }
    else if(n%10 < n){
        
        numberPairs(n/10);
        
        printf("%d%d", n%10, n%10);
    }
    
}

int main(){
    numberPairs(338888886);
}
