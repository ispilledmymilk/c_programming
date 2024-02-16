#include <stdio.h>

int main(){
    int total = 0;
    int count = 0;
    int grade = 0;
    
    printf("Enter the grade, enter -1 to end: ");
    scanf("%d", &grade);
    
    while(grade != -1){
        total += grade;
        count++;
        printf("Enter the grade, enter -1 to end: ");
        scanf("%d", &grade);
    }
    double avg = (double) total/count;
    printf("The calculated average is : %.2f", avg);
  return 0;
}
