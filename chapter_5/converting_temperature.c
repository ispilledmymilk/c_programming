#include <stdio.h>

double tocelsius(double temp){
    double cels_temp = (temp * 1.8) + 32.0;
    
    return cels_temp;
}

double tofarhen(double temp){
    double far_temp = (temp - 32.0) * 0.556;
    
    return far_temp;
}

int main(){
    
    double temperature = 0;
    printf("Enter the temperature you want to convert:");
    scanf("%lf", &temperature);
    
    int option = 0;
    printf("Enter the option 1(to convert into celsius) or 2(to convert to farhenheit): ");
    scanf("%d", &option);
    
    if(option == 2){
        printf("the temp is %.2lf degrees farhenheit", tocelsius(temperature));
    }
    else if(option == 1){
        printf("The temp is %.2lf degrees celsius", tofarhen(temperature));
    }
    
    return 0;
}
