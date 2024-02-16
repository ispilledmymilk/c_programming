#include <stdio.h>
#include <math.h>

int main(){
    int or_num = 0;
    int num = 0;
    int pal = 0;
    int del = 0;
    int rev_num = 0;
    int digit = 0;
    
    printf("Enter the number to be tested: ");
    scanf("%d", &or_num);
    
    if(or_num<10000 || or_num>100000){
        printf("enter a 5 digit number please: ");
    }
    else{
        num = or_num;
        
        while(num != 0){
            digit = num % 10;
            
            rev_num = rev_num*10 + digit;
            
            num/= 10;
        }
}
if(rev_num == or_num){
    printf("yes");
}
else
printf("no");
}
