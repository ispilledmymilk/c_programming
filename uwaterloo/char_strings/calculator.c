#include <stdio.h>

int main(){
    
    char op;
    int a, b;
    printf("Enter the operation (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter the first integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);
    
    printf("%d %c %d = ", a, op, b);
    switch(op){
        case '+':
            printf("%d\n", a + b);
            break;
        
        case '-':
            printf("%d\n", a - b);
            break;
        
        case '*':
            printf("%d\n", a * b);
            break;
            
        case '/':
            printf("%d\n", a/b);
            break;
        
        default:
            printf("Wrong application! ");
    }
}
