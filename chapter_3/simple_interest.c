#include <stdio.h>

int main(){
    float principal=0;
    float rate=0;
    float days = 0;
    printf("enter principal, -1 to end:");
        scanf("%f",&principal);
    
    while(principal!=-1){
        printf("enter principal, -1 to end:");
        scanf("%f",&principal);
        
        printf("enter rate:");
        scanf("%f",&rate);
        
        printf("enter days:");
        scanf("%f",&days);
        
        float interest = (principal*rate*days)/365;
        printf("interest $%f\n", interest);
    }
