#include <stdio.h>

int main(){
    int q = 0;
    int a = 0;
    int m = 0;
    int f1 = 0;
    int f2 = 0;
    
    printf("Enter the quiz grade: ");
    scanf("%d", &q);
    
    printf("Enter the assignment: ");
    scanf("%d", &a);
    
    printf("Enter the midterm grade: ");
    scanf("%d", &m);
    
    f1 = (1000 - q - 4*a - 6*m)/9;
    f2 = (250 - 2*m)/3;
    
    if(f1 >= f2){
        printf("%d\n", f1);
    }
    else{
        printf("%d\n", f2);
    }
}
