#include <stdio.h>

int main(){
    int first_num = 0;
    int input = 0;
    int small = 0;
    int q = 0;
    
    printf("enter the first number: ");
    scanf("%d",&first_num);
    q = first_num;
    int i = 1;
    small = first_num;
    
    for(i = 1; i <=q; i++){
        printf("enter the number: ");
    scanf("%d",&input);
    if(input<small){
        small = input;}
    }
    printf("%d", small);
    }
