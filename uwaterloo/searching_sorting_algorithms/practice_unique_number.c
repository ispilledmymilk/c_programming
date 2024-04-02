#include <stdio.h>

int sort(int a[], int n){
    int z= 0;
    for(int i = 0; i < n ; ++i){
        for(int j = 0; j < i; ++j ){
            if(a[i] == a[j]){
                z++;
                //printf("%d", a[i]);
            }
        }
    }
    return z;
}

int main(){
    int a[] = {8, 6, 9, 5, 3, 0, 9};
    int n = sizeof(a)/ sizeof(a[0]);
    int x = sort(a, n);
    
    if(x != 0){
        printf("false");
    }
    else if(x == 0)
        printf("true");
    
}
