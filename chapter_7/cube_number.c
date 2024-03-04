#include <stdio.h>

int cubebyvalue(int num){
    return num*num*num;
}

int main(){
    int number = 0;
    printf("Enter the number: ");
    scanf("%d", &number);
    
    printf("The number is %d\n", number);
    number = cubebyvalue(number);
    
    printf("The cube of the number is %d\n", number);
}
