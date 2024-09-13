//the question is: write a program that takes in 3 non-negative numbers, 
//prints their concatenated form 
//and then a newline and then the numbers of digits in the concatenated number

#include <stdio.h>

int main(){
    int a=0,b=0,c=0;
    printf("Enter 3 numbers separated by a space: ");
    scanf("%d %d %d", &a, &b, &c);
    
    printf("Concatenated version: \n");
    //printf("%d%d%d", a,b,c);
    int y = printf("%d%d%d", a,b,c);
    printf("\n");
    printf("%d", y);
}
