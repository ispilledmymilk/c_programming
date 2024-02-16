#include <stdio.h>

int main(){
    float gallons= 0;
    float miles = 0;
    float avg;
    float total;
    int count = 0;
    
    printf("Enter the gallons used (-1 to end): ");
    scanf("%f", &gallons);
    
    while(gallons != -1){
    printf("Enter the miles driven : ");
    scanf("%f", &miles);
    
    float x = miles, y = gallons;
    avg = (float) x/y;
    
    total += avg;
    count++;
    printf("the miles/gallon is %f\n", avg);
    
    printf("Enter the gallons used (-1 to end): ");
    scanf("%f", &gallons);
    }
    
    float efficiency = total /count;
    printf("The overall average miles/gallon was %f", efficiency);
}
