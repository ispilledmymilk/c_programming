#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

int main(){
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    assert(year > 1800);
    
    if (((year % 4) == 0) && (year % 100 != 0) || ((year % 400) == 0)){
        printf("yes");
    }
    else{
        printf("no");
    }
    
}
