#include <stdio.h>

int power(int b, int n){
    if(b == 0)
    return 0;
    if(n == 0)
    return 1;
    else
    return b*power(b, n-1);
}

int geo_sum(int b, int n){
    if (b == 0){
        return 1;
    }
    if(n == 0){
        return 1;
    }
    else{
        return power(b, n) + geo_sum(b, n - 1);
    }
}

int main(){
    printf("%d", geo_sum(1, 0));
}
