#include <stdio.h>

int main(){
    int num = 0;
    int denom = 0;
    
    printf("Enter the numerator: ");
    scanf("%d", &num);
    
    printf("Enter the denominator: ");
    scanf("%d", &denom);
    
    
    if(denom == 0){
      printf("Exit the function!");
    }
    else{
      int divv = num/denom;
    if((num%denom < 5) && num>0){
        divv += 1;
    }
    else if((num%denom < 5) && divv<0){
        divv -= 1;
    }
    else if(num<0 && denom < 0){
        divv += 1;
    }
    printf("%d\n", divv);
    }
    
   
    return 0;
}


