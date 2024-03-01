#include <stdio.h>

void sieve(int a[], int m){
    a[0] = 0;
    a[1] = 0;
    if ( m==1){
        return;
    }
    if( m==2) return;
    for(int i=2; i<m; ++i){
        a[i] = 1;
    }
    for(int i=2; i*i<=m; ++i){
        if(a[i]==1){
            for(int j = 2*i; j<m; j+=i){
                a[j] = 0;
            }
        }
    }
}

int main(){
    int m = 120;
    //printf("Enter the number till which you want to know the prime numbers: ");
   // scanf("%d", &m);
    
    int a[m + 1];
    sieve(a, m + 1);
    for(int i = 0; i <= m; ++i){
        if(a[i] == 1){
            printf("%d\n", i);
        }
    }
}
