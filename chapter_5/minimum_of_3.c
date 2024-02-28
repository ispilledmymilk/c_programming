#include <stdio.h>

int minimum(int x, int y, int z){
    int min = x;
    if(min > y){
        min = y;
    }
    if(min > z){
        min = z;
    }
    return min;
}

int main(){
    int x = 0, y = 0, z = 0;
    
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    printf("Enter the third number: ");
    scanf("%d", &z);
    
    printf("The smallest number is %d", minimum(x, y, z));
}
