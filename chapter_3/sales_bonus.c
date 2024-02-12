#include <stdio.h>

int main(){
    float base_sal = 200;
    float sales = 0;
    
     printf("enter sales in dollar, -1 to end: ");
        scanf("%f",&sales);
    
    while(sales !=-1){
               float  bonus = (0.09 * sales) ;
        float total = bonus + base_sal;
       
        printf("salary is %.2f\n",total);
 printf("enter sales in dollar, -1 to end: ");
        scanf("%f",&sales);

    }
}
