#include <stdio.h>

int main(){
    int total = 0;
    int grade = 0;
    int counter = 0;
    
    while(counter<= 10){
        printf("ENter your grade: ");
        scanf("%d", &grade);
        total += grade;
        counter++;
    }
    int avg = total / 10;
    printf("%d", avg);
}
