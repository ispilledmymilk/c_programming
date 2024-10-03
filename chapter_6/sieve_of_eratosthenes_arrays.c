#include <stdio.h>
int sieve(int a[], int n){
    a[0] = 0;
    if(n == 1) return 0;
    a[1] = 0;
    if(n == 2) return 0;
    
    for(int i = 2; i < n; i++){
        a[i] = 1;
    }
    
    for(int j = 0; j*j <= n - 1; j ++){//this is to record the multiples of number starting from 0 to root of n
        if(a[j]){
            for(int z = 2*j; z <= n; z+=j){ // this is checking all of the multiples from 2*x till the value of the multiple is lesser than the input number and for that position we switch of that position
                a[z] = 0;
            }
        }
    }
    for(int i = 0; i < n; i++){
        if(a[i])
        printf("%d ", i);
    }

}

int main(){
    int a[25];
    sieve(a, 25);
}
    
