#include <stdio.h>
#include <math.h>

float round_num(float num){
    int dec_place = 0;
    printf("Enter the decimal place you want to round off to: ");
    scanf("%d", &dec_place);
    if(dec_place % 10 == 0){
        
    float y = floor((num * dec_place) + 0.5) / (dec_place);
    return y;
    
    }
    else{
        
        printf("Enter a legit number.");
        return 0;
    }
    
}

int main(){
    float num = 0;
    printf("Enter the number you want to round off: ");
    scanf("%f", &num);
    
    printf("The rounded off number is %f", round_num(num));
    
}
