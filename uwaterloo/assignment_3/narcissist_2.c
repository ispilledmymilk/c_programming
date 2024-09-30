#include <stdio.h>

int isnarc(int n){
    int x = n%10;
    int number;// here number is 
    int l;
    if (n % 10 == n){
        
        printf("%d %dx ",n, number);
        number += n*n*n;
    }
    else{
        
        printf("%d ", x);
        number = (x*x*x);
        printf("%d\n", number);
        l += number;
        n /= 10;
        isnarc(n);
        
    }
    printf("\n%d", l);
    
    
}

int main(){
     isnarc(153);
}
