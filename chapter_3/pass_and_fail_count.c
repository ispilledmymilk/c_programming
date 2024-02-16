#include <stdio.h>

int main(){
    int result = 0;
    int students = 1;
    int pass_count= 0;
     int fail_count= 0 ;
    while(students<=10){
    printf("Enter 1 if you passed or 2 if you failed: ");
    scanf("%d", &result);
    if(result == 1){
        pass_count++;
    }
    else {
        fail_count++;
    }
    students++;}
    printf("Pass count is :%d \n Fail count is :%d", pass_count, fail_count);
  if(pass_count>8){
    printf("Bonus to Instructor!");
  }
}
