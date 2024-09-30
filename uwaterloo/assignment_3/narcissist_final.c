#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

int isnarc(int n){
    int x = 0;
  
    if (n == 0){
        return 0;
    }
    else {
        x = n%10;
        n /= 10;

        return ((x*x*x) + isnarc(n));
        
    }
  
}

bool narcissist(int n){
    if(isnarc(n) == n){
        return 1;
    }
    else{
        return 0;
    }
}

/*int main(){
    assert(!narcissist(9));
}*/
