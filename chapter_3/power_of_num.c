#include <stdio.h>

int main(){
    printf("Enter the base of the exponent: ");
    int x = 0;
    scanf("%d", &x);
    printf("Enter the power of the exponent: ");
    int y = 0;
    scanf("%d", &y); 
    int i = 1;
    int power = 1;
    while(i <= y){
        power *= x;
        i++;
    }
    printf("The answer is %d", power);
    return 0;
    
}
