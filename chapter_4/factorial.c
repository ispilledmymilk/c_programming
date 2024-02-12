#include <stdio.h>

int main(){
    int input = 0;
    int q=0;
    int i = 1;
    int factorial = 1;
    
    printf("Enter the number: ");
    scanf("%d",&input);
    
    q = input;
    
    for(i = 1; i<=q; i++){
        factorial *= i;
        
    }
    
printf("%d", factorial);
}
