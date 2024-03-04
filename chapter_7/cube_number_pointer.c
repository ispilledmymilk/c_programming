#include <stdio.h>

void cubebyvalue(int *nptr){
    *nptr = *nptr * *nptr * *nptr;
}

int main(){
    int num = 0;
    printf("Enter the number you want to cube: ");
    scanf("%d", &num);
    
    printf("The number is %d\n", num);
    
    cubebyvalue(&num);
    
    printf("THe cubed value is %d\n", num);
}
