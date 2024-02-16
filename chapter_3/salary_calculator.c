#include <stdio.h>

int main(){
    float hours = 0;
    printf("Enter # of hours worked (-1 to end): ");
    scanf("%f", &hours);
    float rate = 0 ;
    float salary = 0;
    
    while(hours != -1){
        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%f", &rate);
        
        if(hours < 41){
        salary = (float) hours*rate ;
        printf("Salary is $ %.2f\n", salary);}
        else{
            float rate_over = 1.5*rate;
            salary = (float) ((40*rate) + ((hours-40)*rate_over));
            printf("Salary is $ %.2f\n", salary);
        }
        
        printf("Enter # of hours worked (-1 to end): ");
        scanf("%d", &hours);
    
    }
    return 0;
}
