#include <stdio.h>
#include <math.h>

int main(){
    double prinicpal = 1000.00;
    double rate = 0.05;
    
    printf("%4s%21s\n", "Year", "Amount of deposit");
    
    for(int year = 1; year <= 10; ++year){
        double amount = principal * pow(1.0 + rate, year);
        
        printf("%4d%21.5f\n", year, amount);
    }
}
