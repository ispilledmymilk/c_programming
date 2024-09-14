#include <stdio.h>

int main(){
    int num_people = 0;
    int slices_per_pizza = 0;
    int slices_each = 0;
    
    
    scanf("%d", &num_people);

    scanf("%d", &slices_per_pizza);
    
    scanf("%d", &slices_each);
    
    int total_slices = slices_each * num_people;
    
    int pizzas = total_slices / slices_per_pizza;
    
    if((total_slices % slices_per_pizza) != 0){
        pizzas+=1;
    }
    printf("%d\n", pizzas);
    
    return 0;
}
