#include <stdio.h>

/*int sum(int n){           //this is by loop
    int total = 0;
    for(int i = n; i > 0 ; --i){
        printf("%d",i); 
        total += i;
        
    }
    for(int i = 1; i <=n; ++i){
        printf("%d", i);
    }
    printf("\n");
    return total;
}*/

/*int sum(int n){             //this is by recursion
    if(n < 1){
        return n;
        printf("\n");
    }
    else{
        printf("%d", n);
        return n + sum(n - 1);
        
    }
    
}*/

int sum_tail(int n, int acc){
    if(n <= 0){
        return acc;
    }
    else{
        printf("%d", n);
        acc = sum_tail(n - 1, acc + n);
        printf("%d", n);
        return acc;
    }
}

int sum(int n){
    return sum_tail(n, 0);
}

int main(){
    int num = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    printf("%d is the sum of the first %d numbers", sum(num), num);
}
